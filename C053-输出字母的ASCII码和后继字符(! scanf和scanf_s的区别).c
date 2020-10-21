/*
题目：输入由4个字母构成的英文单词，按如下格式输出字母，该字母的ASCII码以及该字母的后继字符。每行输出数据之间用一个空格分隔。
输入: 单词
输出：共4行，每行输出字母，该字母的ASCII码，该字母后继字符（空格分隔，每行的最后没有空格）
*/
#include <stdio.h>
int main(void)
{
	char a, b, c, d;
	scanf_s("%c%c%c%c",&a,1,&b,1,&c,1,&d,1);		//Attention:此处若用scanf_s则会发生异常:“ 0xC0000005: 写入位置 xxx 时发生访问冲突。”	原因：scanf和scanf_s处理字符串的方式不同	解决办法见下注

	printf("%c %d %c\n",a, a, a + 1);
	printf("%c %d %c\n",b, b, b + 1);
	printf("%c %d %c\n",c, c, c + 1);
	printf("%c %d %c\n",d, d, d + 1);
	return 0;
}
/*
注：1.scanf_s()用于读取字符串时，必须在变量后边提供一个数字以表明最多读取多少位字符
	e.g. scanf_s("%c,%c",&a,1,&b,1)
	2.若要在VS中使用scanf()则需要在预处理命令中添加一条_CRT_SECURE_NO_DEPRECATE

*/