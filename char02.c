#include<stdio.h>

int main()
{
	char ch;
	
	printf("���ĺ� �Է�:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
		ch -= 32;
	
	printf("����� �Է��� ������ �빮�ڴ� %c�Դϴ�.",ch);	
	return 0;
}
