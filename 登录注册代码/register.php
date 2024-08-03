<?php
    if(empty($_POST["username"])){
        die("用户名不能为空!");
    }

    if(strlen($_POST["pass"]) < 6){
        die("密码不能小于6位");
    }

    if($_POST["pass"] !== $_POST["enpass"]){
        die("两次输入的密码不一致");
    }

    if(!filter_var($_POST["email"],FILTER_VALIDATE_EMAIL)){
        die("请输入合法的邮箱地址!!");
    }

    $pass_hash = password_hash($_POST["pass"],PASSWORD_DEFAULT);
    $name = $_POST["username"];
    $email = $_POST["email"];

    $mysqli = new mysqli("sql309.infinityfree.com", "if0_36810270", "zqs13142zqs", "if0_36810270_user");

    if(isset($_POST["reg"])){
        $sql = "INSERT INTO user (name, email, pass_hash) VALUES('$name', '$email', '$pass_hash')";
        $mysqli->query($sql);

        if($mysqli->affected_rows > 0){
            echo "<script>alert('恭喜你,注册成功,马上跳转登录页面!');window.location.href = 'index.html'</script>";    
        }
    }