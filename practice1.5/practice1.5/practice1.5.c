//实现一个函数，计算N个整数中所有奇数的和，同时实现一个判断奇偶性的函数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 10

int even(int n)
{
    int result;
    if (n % 2 == 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}
int OddSum(int List[], int N)
{
    int sum = 0;
    for (int j = 0; j < N; j++)
    {
        if (even(List[j]) == 0)
        {
            sum += List[j];
        }
    }
    return sum;
}
//其中函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0。函数OddSum负责计算并返回传入的N个整数List[]中所有奇数的和。
int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++) 
    {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

