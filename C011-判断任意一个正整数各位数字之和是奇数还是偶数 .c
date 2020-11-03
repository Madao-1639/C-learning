/*
题目;编程判断任意一个正整数各位数字之和是奇数还是偶数。如果是奇数输出1，偶数输出0
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int y,x,i;
	x = 0 , i = 1;
	scanf_s("%d", &y);

	while (y >= pow(10, i))		//计算y的位数
		i++;

	while (i > 0)
	{
		x=x+ y / (int)pow(10, i - 1);		//提取最高位数字
		y = y % (int)pow(10, i - 1);					
		i--;
	}

	if (x % 2 == 1)
		printf("1");
	else
		printf("0");

	return 0;
}