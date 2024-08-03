<?php
$mysqli = new mysqli("sql309.infinityfree.com","if0_36810270","zqs13142zqs","if0_36810270_user");
$pass_hash = password_hash($_POST["pass"],PASSWORD_DEFAULT);
$name = $_POST["name"];

if(isset($_POST["login"])){
    $sql = "SELECT pass_hash FROM user WHERE name='$name'";
    $res = $mysqli->query($sql)->fetch_assoc();

    if($res){
        if(password_verify($_POST["pass"], $res["pass_hash"])){
            echo "<script>window.location.href='11.html';</script>";
        }else{
            echo "<script>alert('密码输入有误!!');history.go(-1);</script>";
        }
    }else{
        echo "<script>alert('用户不存在!!');history.go(-1);</script>";
    }
}