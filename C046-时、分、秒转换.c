/*
题目：输入总秒数，转换为相应的时、分、秒。提示：在输出时，请使用下面的格式（变量名不要求一样）printf("%d:%.2d:%.2d\n", h, m, s)
输入：整数
输出：时分秒，整数，西文冒号分隔。
*/

#include <stdio.h>
int main(void)
{
	int t,h,m,s;		//t:总秒数，其他变量命名与题目相同
	scanf_s("%d", &t);

	h = t / 3600;
	m = (t - 3600*h) / 60;
	s = (t - 3600*h - 60*m) % 60;

	printf("%d:%.2d:%.2d\n", h, m, s);
	return 0;
}