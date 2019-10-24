#include<stdio.h>

int main()
{
	int age, money = 10000;
	
	printf("당신의 나이는?:");
	scanf("%d",&age);
	
	if(age >= 19)
	{
		money = 15000;
		printf("당신은 성인입니다\n");
		printf("당신의 입장료는 %d입니다.\n",money);
	}
	else
	{
		money = 9000;
		printf("당신은 미성년자입니다\n");
		printf("당신의 입장료는 %d입니다.\n",money);
	}
	return 0;
}
