/*  
输入：工资数，小时数（整数，空格分隔），
输出：工资/小时数（精确到小数点后2位），并根据四舍五入取整，然后将取整的数平方后计算一共有几位，后三位分别是什么。
程序的运行示例如下：
2345 2    （输入）
1172.50   （本行及以下为输出）
1173
7
9 2 9
 ***输入数据格式***："%d %d"
 ***输出数据格式***："%.2f\n"
                     "%d\n"
                     "%d\n"
                     "%d %d %d\n"     
*/
#include <stdio.h>
int main(void)
{
    int pay=0,hour=0,flag=0,rateint=0,count=0,ratecount=0,i=0,ii=0,iii=0;
    double rate=0.0;
    scanf("%d %d",&pay,&hour);
    rate = (double)pay/hour;
    printf("%.2f\n",rate);
    flag = ((int)(rate*10)%10);
    if (flag <= 4)
        rateint = (int)rate;
    else
        rateint = (int)rate+1;
    printf("%d\n",rateint);
    ratecount = rateint*rateint;
    while (ratecount != 0)
    {
       ratecount /= 10;
       count++;
    }
    printf("%d\n",count);
    i = (rateint*rateint)%10;
    ii = ((rateint*rateint)/10)%10;
    iii =   ((rateint*rateint)/100)%10;
    printf("%d %d %d\n",i,ii,iii);
}