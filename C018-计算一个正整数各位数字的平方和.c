/*
题目：输入任意一个正整数，计算各位数字的平方和。如：1234 则：计算1*1+2*2+3*3+4*4=30
   输入：一个正整数
   输出：整数
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, s=0, i = 1, j = 10;
	scanf_s("%d", &a);

	while(a>=j)		//判断位数
	{
		i++;
		j = j * 10;
	}

	for (; i > 0; i--)
	{
		j = j / 10;
		s = (a / j) * (a / j) + s;
		a = a % j;
	}

	printf("%d", s);
	return 0;
}