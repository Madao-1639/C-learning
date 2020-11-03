/*
题目：找出[m,n]范围内是7的倍数或带7的全部正整数，m和n为正整数。
*/

#include<stdio.h>
int main(void)
{
	int m, n;
	scanf_s("%d %d", &m, &n);

	for (; m <= n; m++)
	{
		if (m % 7 == 0)
			printf("%d是7的倍数\n", m);
		if (m % 10 == 7)
			printf("%d是带7的数\n", m);
	}
	return 0;
}