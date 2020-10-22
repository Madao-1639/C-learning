/*
题目：输入一个大写英文字母， 输出与其相邻的字母串（将字母A-Z看作是收尾相接的环状排列）。
输入: 大写英文字母
输出:该字母前面的字母，该字母，该字母后面的字母。（三字母间无间隔）
*/

#include <stdio.h>
int main(void)
{
	char a;
	scanf_s("%c", &a);
	if (a == 'A')
		printf("ZAB");
	else if (a == 'Z')
		printf("YZA");
	else
		printf("%c%c%c", a - 1, a, a + 1);
	return 0;
}