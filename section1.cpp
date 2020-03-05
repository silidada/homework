#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int getInput();
void printK(int n);
void printLine(int n);


int main()
{
	int n;	//接受输入行数


	//进行输入,并防止输入小于1或者偶数
	do
	{
		printf("请输入K的行数(正奇数):");
		n = getInput();
	} while (n % 2 == 0 || n < 1 );

	//打印K
	printK((n+1)/2);
}



//获取输入并且进行简单的错误处理
int getInput()
{
	int n = 0;
	while (!scanf("%d", &n))
	{
		printf("输入有误!请重新输入:");
		n = getchar();
	}
	return n;
}


//根据输入n行打印K
void printK(int n)
{
	//如果是中间那一行就结束递归
	if (n == 1)
	{
		printf("**\n");
		return;
	}


	//对中间以上部分进行顺序输入
	printLine(n);

	printK(n - 1);


	//对中间一下部分进行逆序输入
	printLine(n);
}


//对每一行进行输出
void printLine(int n)
{
	printf("*");
	for (int i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	printf("*\n");
}