#include<stdio.h>

int main()
{
	char ch;
	
	printf("�빮�� �Է�:");
	scanf("%c",&ch);
	//�빮�� 'A' �ƽ�Ű�ڵ尪 65  B�� �ƽ�Ű�ڵ尪�� 66 
	//�ҹ��� 'a' �ƽ�Ű�ڵ尪 97  �ι����� ���̴� 32
	
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.",ch, ch+32);	
	return 0;
}
