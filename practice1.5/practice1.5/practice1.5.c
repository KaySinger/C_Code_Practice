//ʵ��һ������������N�����������������ĺͣ�ͬʱʵ��һ���ж���ż�Եĺ�����
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
//���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ����nΪż��ʱ����1�����򷵻�0������OddSum������㲢���ش����N������List[]�����������ĺ͡�
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

