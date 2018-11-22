#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void sushu()
{
	printf("打印100~200之间的素数\n");
	int i = 0;
	int j = 0;
	for (int i = 100; i <= 200; i++)
	{
		int c = 0;
		for (j = 2; j < i; j++)
		{
			if (0 == i%j)
			{
				c++;
			}
		}
		if (c == 0)
		{
			printf("%d\n", i);
		}
	}
}
void chengfa()
{
	printf("输出乘法口诀表\n");
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
}
void runnian()
{
	printf("判断1000~2000之间的闰年\n");
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (0 == i % 400 || (0 != i % 100 && 0 == i % 4))
		{
			printf("%d\n", i);
		}

	}
}
int main()
{
	sushu();//打印100~200之间的素数
	chengfa();//输出乘法口诀表
	runnian();//判断1000~2000之间的闰年
	system("pause");
	return 0;
}