#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3^3
//本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。
//函数narcissistic判断number是否为水仙花数，是则返回1，否则返回0。
//函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000。
int narcissistic(int number)
{
    //计算位数
    int cnt = 0, n;
    n = number;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    //计算
    int sum = 0, t = 0,j = 0;
    n = number;//n重新赋值
    for (int i = 0; i < cnt; i++)
    {
        t = n % 10;//取个位
        j = (int)pow(t, cnt);//pow函数 取t的立方
        sum += j;
        n /= 10;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}
void PrintN(int m, int n)
{
    for (int i = m+1; i < n; i++)
    {
        if (narcissistic(i) == 1)
            printf("%d\n", i);
    }
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}
