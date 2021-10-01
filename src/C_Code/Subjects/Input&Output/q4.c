/* 按如下公式计算三角形面积。
            *海伦公式
输入三角形的三个边长，计算三角形的面积。设三角形的三个边长分别为a、b、c，为简单起见，我们认为输入的三个边长数据是正确的，可以组成一个三角形。
 **输入格式要求："%f,%f,%f" 提示信息："Enter 3 floats:" 
 **输出格式要求："area=%.2f\n" 程序运行示例如下： Enter 3 floats:2,2,3 area=1.98 */

#include <stdio.h>
#include <math.h>
int main(void)
{
    float a=0,b=0,c=0,s=0,area=0;
    printf("Enter 3 floats:");
    scanf("%f,%f,%f",&a,&b,&c);
    s=(a+b+c)/2;
    area = pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("area=%.2f\n",area);
}
