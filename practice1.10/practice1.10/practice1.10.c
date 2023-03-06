#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：cos函数用泰勒公式表示
//其中用户传入的参数为误差上限e和自变量x；函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值。输入输出均在双精度范围内。
double funcos(double e, double x)
{
    int temp = -1;
    double item = 1, m = 2, sum = 1;//cos函数用泰勒表示第一位为1
    double fenmu = 1, fenzi = 1;
    while (item > e)
    {
        for (int i = 1; i <= m; i++)
            fenmu = fenmu * i;
        fenzi = pow(x, m);
        item = fenzi / fenmu;
        sum += item * temp;
        m = m + 2;//后一位泰勒
        fenmu = 1;//分母重置
        temp = -temp;//符号重置
    }
    return sum;
}

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
