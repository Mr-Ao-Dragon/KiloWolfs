#include <stdio.h>
int main(void)
{
    int year=0,month=0,day=0,sumday=0,yearflag=0;
    printf("请输入年、月、日：");
    scanf("%d,%d,%d",&year,&month,&day);
    if (((year%4 == 0)&&(year%100!=0))||(year%400 == 0)) //--To distinguish if is a run year :(
        yearflag = 1;
    switch (month) //--calculate the sumday
    {
    case 12:
        sumday += day;
    case 11:
        if (month == 11)
            sumday += day;
        else 
            sumday += 30;
    case 10:
        if (month == 10)
            sumday += day;
        else
            sumday += 31;
    case 9:
        if (month == 9)
            sumday += day;
        else
            sumday += 30;
    case 8:
        if (month == 8)
            sumday += day;
        else
            sumday += 31;
    case 7:
        if (month == 7)
            sumday += day;
        else
            sumday += 31;
    case 6:
        if (month == 6)
            sumday += day;
        else
            sumday += 30;
    case 5:
        if (month == 5)
            sumday += day;
        else
            sumday += 31;
    case 4:
        if (month == 4)
            sumday += day;
        else
            sumday += 30;
    case 3:
        if (month == 3)
            sumday += day;
        else
            sumday += 31;
    case 2:
        if (month == 2)
            sumday += day;
        else
            {if (yearflag == 0)
                sumday += 28;
            else
                sumday += 29;
            }
    case 1:
        if (month == 1)
            sumday += day;
        else
            sumday += 31;
    }
    printf("这是%d年的第%d天。\n",year,sumday);
    if (sumday%5 == 4 || sumday%5 == 0)
        printf("晒网。\n");
    else
        printf("打鱼。\n");
}