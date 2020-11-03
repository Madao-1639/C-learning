/*
题目：检验由三边能否构成三角形，检验方法是任意两边和均要大于第三边。
输入:三边长度
输出：若果可以构成，输出YES，否则输出ERROR DATA
*/

#include<stdio.h>
int main(void)
{
	float a[3];
	scanf_s("%f %f %f", &a[0], &a[1], &a[2]);

	if (a[0]>0&&a[1]>0&&a[2]>0&&
		a[0] + a[1] > a[2] &&
		a[0] + a[2] > a[1] &&
		a[1] + a[2] > a[0])
		printf("YES");
	else
		printf("ERROR DATA");
	return 0;
}