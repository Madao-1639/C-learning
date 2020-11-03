/*
题目：若三个正整数a,b,c满足 a^2+b^2=c^2，则它们是一组勾股数。(^2表示平方，a^表示a的平方)。
    求给定区间[m,n]中的勾股数的数量(设一组勾股数满足a<b<c)。例如[1,10]中的勾股数有(3,4,5)和(6,8,10)，则[1,10]中勾股数的数量为2.
    输入：正整数m,n,    m,n>0.
    输出：[m,n]中的勾股数的数量
*/

#include<stdio.h>
int main(void)
{
    int m, n,i=0,a,b,c;
    scanf_s("%d %d", &m, &n);

    for (a = m; a <= n; a++)
    {
        for (b = a; b <= n;b++)
        {
            for (c = b; c <= n; c++)
            {
                if (a * a + b * b == c * c)
                    i++;
            }
        }
    }
    printf("%d", i);
    return 0;
}
