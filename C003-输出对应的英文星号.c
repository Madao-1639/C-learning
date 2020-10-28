/*
题目：读取3个数（1~10）的整数值，每读取一个值，程序打印出该值个数的英文星号(""""*"""")。
输入：3个整数，3行。
输出：3行星号。
*/

#include <stdio.h>
void print_stars(void);
int main(void)
{
	int j;
	for (j = 1; j <= 3; j++)
		print_stars();
	return 0;
}

void print_stars(void)
{
	int a,i;
    scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
		printf("*");
	printf("\n");
}

//小装一把= =没必要用多个函数。