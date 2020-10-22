/*
题目：计算银行存款本息。输入存款金额money（单位：元），存期years，年利率rate，计算到期存款本息（保留2位小数）
提示：求x的y次幂可以使用数学函数pow(x, y)，其中x, y均为double型, 在程序开始加上：#include<math.h>
输入:存款金额，存期，年利率。均为浮点数，且用逗号分隔
输出：存款本息（保留2位小数）
*/

#include<stdio.h>
#include<math.h>
int main()
{
	float sum,money, years, rate;		//命名方式和题目相同

	scanf_s("%f,%f,%f", &money, &years, &rate); 
	sum = money * pow((double)1 + rate,(double)years);
	printf("%.2f", sum);				//保留n位小数输出的格式符为%.nf(看好这个小数点!)
	return 0;
}