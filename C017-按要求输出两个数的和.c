/*
题目：输入整数a和b，若a*a+b*b大于等于100，则输出a*a+b*b百位及以上的数字，否则输出a*a+b*b。
例如，输入25 25 ，它们的平方和为625+625=1250，百位及以上数为12.
输入：两个整数，中间用空格隔开。
输出：一个整数。
*/

#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = a * a + b * b;
	if (c > 100)
		printf("%d", (c - c % 100) / 100);
	else printf("%d", c);
	return 0;
}