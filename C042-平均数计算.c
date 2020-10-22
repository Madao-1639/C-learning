/*
题目：从键盘输入任意3个整数，然后输出这3个数的平均值。
输入：3个整数，用空格分隔。
输出：平均数（实数，提示：输出平均值时请使用格式符 “%g”）。
*/

#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%g", (a + b + c) / 3.0);
	return 0;
}