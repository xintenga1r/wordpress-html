#include <stdio.h>

int main()
{
	char ch1,ch2;
	printf("输入一个大写或小写字母\n");
	ch1=getwchar();
	ch2=ch1+32;
	printf("对应的字符等于:\n");
	putwchar(ch2);
}