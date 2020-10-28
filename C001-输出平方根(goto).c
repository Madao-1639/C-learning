/*
题目：从键盘输入一个小于等于1000的正整数x，输出其平方根（为整数）。若输入数大于1000，则输出0，并继续接受下一个输入直至小于等于1000。（提示：使用求平方根函数sqrt需要包含<math.h>头文件）。
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	input:scanf_s("%d", &x);
	if (x <= 1000)
		printf("%d", (int)sqrt(x));
	else
	{
		printf("0\n");
		goto input;
	}
	return 0;

}