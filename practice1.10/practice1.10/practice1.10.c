#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//����Ҫ��ʵ��һ�������������й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e��cos������̩�չ�ʽ��ʾ
//�����û�����Ĳ���Ϊ�������e���Ա���x������funcosӦ�����ø�����ʽ��������������������Ҫ���cos(x)�Ľ���ֵ�������������˫���ȷ�Χ�ڡ�
double funcos(double e, double x)
{
    int temp = -1;
    double item = 1, m = 2, sum = 1;//cos������̩�ձ�ʾ��һλΪ1
    double fenmu = 1, fenzi = 1;
    while (item > e)
    {
        for (int i = 1; i <= m; i++)
            fenmu = fenmu * i;
        fenzi = pow(x, m);
        item = fenzi / fenmu;
        sum += item * temp;
        m = m + 2;//��һλ̩��
        fenmu = 1;//��ĸ����
        temp = -temp;//��������
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

/* ��Ĵ��뽫��Ƕ������ */
