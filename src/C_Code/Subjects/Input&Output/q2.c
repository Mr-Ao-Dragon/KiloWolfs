/* 写一个程序，将接收的摄氏温度转换为对应的华氏温度。程序应显示如下的提示信息：
       Please input cels:     
然后输入一个十进制数并回车，然后程序以合适的消息形式输出转换后的华氏温度。
已知华氏温度转换为摄氏温度的公式为：摄氏温度 = 5.0 *（华氏温度 – 32.0） /  9.0
**输入格式要求："%lf" 提示信息："Please input cels: "
（注意冒号后面有1个空格，请直接拷贝粘贴题目给的格式控制字符串）
**输出格式要求："The fahr is: %.2f" */

#include <stdio.h>
int main(void)
{
    double t = 0.0;
    printf("Please input cels: ");
    scanf("%lf",&t);
    t = t*9/5+32;
    printf("The fahr is: %.2f",t);
}

//格式要求属实不清晰（