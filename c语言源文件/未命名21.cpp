#include <stdio.h>

int main()
{
	char ch1,ch2;
	printf("����һ����д��Сд��ĸ\n");
	ch1=getwchar();
	ch2=ch1+32;
	printf("��Ӧ���ַ�����:\n");
	putwchar(ch2);
}