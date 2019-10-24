#include<stdio.h>

int main()
{
	char ch;
	
	printf("알파벳 입력:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
		ch -= 32;
	
	printf("당신이 입력한 문자의 대문자는 %c입니다.",ch);	
	return 0;
}
