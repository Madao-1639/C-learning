/*
题目：输入2个整数，求：和，差，积，商
输入：2个整数（第二个数是非零整数）
输出：4个整数，依次为和、差、积和商，数据间用空格分隔。
*/

#include <stdio.h>
int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d %d %d %d", a + b, a - b, a * b, a / b);
	return 0;
}
