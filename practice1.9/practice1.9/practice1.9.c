#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
//ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺153=1^3+5^3+3^3
//����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�������һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����
//����narcissistic�ж�number�Ƿ�Ϊˮ�ɻ��������򷵻�1�����򷵻�0��
//����PrintN���ӡ������(m, n)�����е�ˮ�ɻ�����ÿ������ռһ�С���Ŀ��֤100��m��n��10000��
int narcissistic(int number)
{
    //����λ��
    int cnt = 0, n;
    n = number;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    //����
    int sum = 0, t = 0,j = 0;
    n = number;//n���¸�ֵ
    for (int i = 0; i < cnt; i++)
    {
        t = n % 10;//ȡ��λ
        j = (int)pow(t, cnt);//pow���� ȡt������
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
