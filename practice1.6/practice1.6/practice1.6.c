#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//ʵ��һ���������Ը���ƽ��������������(x1,y1)��(x2,y2)����������֮��ľ��롣
//�����û�����Ĳ���Ϊƽ���������������(x1, y1)��(x2, y2)������distӦ���������ľ��롣
double dist(double x1, double y1, double x2, double y2)
{
    double large = 0;
    large = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return large;
}

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}