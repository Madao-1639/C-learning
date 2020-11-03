/*
题目：编程求以下级数前n项之和：
　s=1-1/3+1/5-1/7+...
*/

#include<stdio.h>
int main(void)
{
	int n, i,j=1;
	float s = 0;
	scanf_s("%d", &n);

	for (i = 1; i <= 2 * n - 1; i = i + 2)
	{
		s = s + (double)j / i;
			j = j * (-1);
	}

	printf("%f", s);
	return 0;
}

/*
问题：输出值总为1
错因：第15行s = s + j / i;
j和i均为整数且i大于j，故“j / i”总为1
！！！在C语言中，整数除法操作将执行舍位！！！
*/