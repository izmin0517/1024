#include<stdio.h>

int main()
{
	int age, money = 10000;
	
	printf("����� ���̴�?:");
	scanf("%d",&age);
	
	if(age >= 19)
	{
		money = 15000;
		printf("����� �����Դϴ�\n");
		printf("����� ������ %d�Դϴ�.\n",money);
	}
	else
	{
		money = 9000;
		printf("����� �̼������Դϴ�\n");
		printf("����� ������ %d�Դϴ�.\n",money);
	}
	return 0;
}
