//本题要求实现一个计算Fibonacci数的简单函数，
//并利用其实现另一个函数，输出两正整数m和n（0 < m≤n≤10000）之间的所有Fibonacci数。
//所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。
//其中函数fib须返回第n项Fibonacci数；
//函数PrintFN要在一行中输出给定范围[m, n]内的所有Fibonacci数，
//相邻数字间有一个空格，行末不得有多余空格。如果给定区间内没有Fibonacci数，
//则输出一行“No Fibonacci number”。
#include <stdio.h>
int fib(int n)//fib(7)=13即1+1+2+3+5+8=13 13为第7项
{
    int num1 = 1, num2 = 1, sum = 0;
    while (n > 2)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        n--;
    }
    return sum;
}
void PrintFN(int m, int n)
{
    int flag = 0;//标识符
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = fib(i);
        if (temp >= m && temp <= n)
        {
            flag = 1;
            count++;
            if (count > 1)
                printf(" ");
            printf("%d",temp);
        }
    }
    if (flag == 0)
        printf("No Fibonacci number");
}
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}