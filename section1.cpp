#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int getInput();
void printK(int n);
void printLine(int n);


int main()
{
	int n;	//������������


	//��������,����ֹ����С��1����ż��
	do
	{
		printf("������K������(������):");
		n = getInput();
	} while (n % 2 == 0 || n < 1 );

	//��ӡK
	printK((n+1)/2);
}



//��ȡ���벢�ҽ��м򵥵Ĵ�����
int getInput()
{
	int n = 0;
	while (!scanf("%d", &n))
	{
		printf("��������!����������:");
		n = getchar();
	}
	return n;
}


//��������n�д�ӡK
void printK(int n)
{
	//������м���һ�оͽ����ݹ�
	if (n == 1)
	{
		printf("**\n");
		return;
	}


	//���м����ϲ��ֽ���˳������
	printLine(n);

	printK(n - 1);


	//���м�һ�²��ֽ�����������
	printLine(n);
}


//��ÿһ�н������
void printLine(int n)
{
	printf("*");
	for (int i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	printf("*\n");
}