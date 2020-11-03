/*
题目：求a+aa+aaa+aaaa+…+aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1+11+111之和为123；
输入：组成序列的数字a和求和项的数量n
输出：算式和结果。
*/

#include<stdio.h>
int main(void)
{
	int a, n, i,j,x,y;		//a,n与题目作用相同；i，j为计数变量；y为输出结果；x为算式中的每一项
	scanf_s("%d %d", &a, &n);
	j = 1 , x = 0 , y = 0 ;

	for (i = 1; i <= n; i++)
	{
		x = a * j + x;
		y = y + x;
		j = j * 10;
		if (i == 1)	//控制格式
			printf("%d", x);
		else
			printf("+%d", x);
	}
	printf("=%d", y);
	return 0;
}