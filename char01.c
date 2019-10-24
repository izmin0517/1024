#include<stdio.h>

int main()
{
	char ch;
	
	printf("대문자 입력:");
	scanf("%c",&ch);
	//대문자 'A' 아스키코드값 65  B의 아스키코드값은 66 
	//소문자 'a' 아스키코드값 97  두문자의 차이는 32
	
	printf("%c의 소문자는 %c입니다.",ch, ch+32);	
	return 0;
}
