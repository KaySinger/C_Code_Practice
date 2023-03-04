#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个统计整数中指定数字的个数的简单函数。
//其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。函数CountDigit应返回number中digit出现的次数。
int CountDigit(int number, int digit)
{
    int cnt = 0, flag;
    if (number < 0)
        number *= -1;//倘若number是负数，则取反
    while (number >= 10)
    {
        flag = number % 10;//表达参数
        number /= 10;
        if (flag == digit)
            cnt++;//计数器
    }
    if (number == digit)
        cnt++;
    return cnt;
}

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}