#include <stdio.h>
#include <math.h>
int main(void)
{
    double pointx = 0, pointy = 0;
    printf("2021116120朱思燚\n");
    printf("请输入一平面点的坐标：");
    scanf("%lf,%lf", &pointx, &pointy);
    if (fabs(pointx) <= 2 && fabs(pointy) <= 2)
        printf("坐标点（%f,%f）在图示的正方形内\n", pointx, pointy);
    else
        printf("坐标点（%f,%f）不在图示的正方形内\n", pointx, pointy);
}
