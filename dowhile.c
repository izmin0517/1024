#include<stdio.h>

int main()
{
	int i, num, hap=0;
	
	printf("양의 정수 입력:");
	scanf("%d",&num);
	
	i = num;
	
	do
	{
		hap = hap + i;
		i--;
	}
	
	while(i > 0);
		printf("1부터 %d까지의 합 = %d입니다.\n",num,hap);
		
	//do while문은 while()뒤에 반드시 ;를 붙여야함 
	
	return 0;	
} 
