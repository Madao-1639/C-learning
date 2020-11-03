/*
题目：一个球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。求其在第n次落地时，共经过了多少米？第n次反弹高度是多少？
输入:第n次的值,整数
输出：小球经过的路程长度和小球反弹的高度，分2行输出。
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int n, i;
	double s = -100, h = 100;
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}

	printf("%f\n%f", s, h);
	return 0;
}



/*
解法二的函数体：
int n;
	double s, h;
	scanf_s("%d", &n);

	h = 100 / pow(2, n);
	s = 400 * (1 - pow(0.5, n )) - 100;		//每次的路程按两倍两倍高度算(等比数列求和)，但第一次下落仅有一倍高度
*/