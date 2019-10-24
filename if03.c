#include<stdio.h>

int main()
{
	int score;
	
	printf("점수 입력:");
	scanf("%d",&score);
	
	if(score >= 95)
		printf("당신의 학점은 4.5이고 등급은 A+입니다.\n");
	else if(score >= 90)
		printf("당신의 학점은 4.0이고 등급은 A입니다.\n");	
	else if(score >= 85)
		printf("당신의 학점은 3.5이고 등급은 B+입니다.\n");	
	else if(score >= 80)
		printf("당신의 학점은 3.0이고 등급은 B입니다.\n");	
	else if(score >= 75)
		printf("당신의 학점은 2.5이고 등급은 C+입니다.\n");	
	else if(score >= 70)
		printf("당신의 학점은 2.0이고 등급은 C입니다.\n");	
	else if(score >= 65)
		printf("당신의 학점은 1.5이고 등급은 D+입니다.\n");	
	else if(score >= 60)
		printf("당신의 학점은 1.0이고 등급은 D입니다.\n");	
	else
		printf("당신의 학점은 F입니다.\n");
	return 0;
	
	//실행할 문장이 위와 같이 if문당 하나밖에 없으면 중괄호 생략 가능 
}
