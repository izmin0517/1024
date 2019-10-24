#include<stdio.h>

int main()
{
	int score;
	
	printf("점수 입력:");
	scanf("%d",&score);
	
	switch(score/10)
	{
		case 10:
		case 9:
			printf("당신의 학점은 A 입니다.");
		break;
		case 8:
			printf("당신의 학점은 B 입니다.");
		break;
		case 7:
			printf("당신의 학점은 C 입니다.");
		break;
		case 6:
			printf("당신의 학점은 D 입니다.");
		break;
		default:
			printf("당신의 학점은 F 입니다.");
	}
	
	return 0;
}
