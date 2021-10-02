#include <stdio.h>
int main(void)
{
    float profit=0,flag=0,reward=0;
    printf("请输入企业利润(元)：");
    scanf("%f",&profit);
    if (profit <= 1e5)
        reward = profit*0.1;
            else if (profit <= 2e5)
            reward = 1e5*0.1 + (profit-1e5)*0.075;
                else if (profit <= 4e5)
                reward = 1e5*0.1 + 1e5*0.075 + (profit-2e5)*0.05;
                    else if (profit <= 6e5)
                    reward = 1e5*0.1 + 1e5*0.075 + 2e5*0.05 + (profit-4e5)*0.03;
                        else if (profit <= 1e6)
                        reward = 1e5*0.1 + 1e5*0.075 + 2e5*0.05 + 2e5*0.03 + (profit-6e5)*0.015;
                            else 
                            reward = 1e5*0.1 + 1e5*0.075 + 2e5*0.05 + 2e5*0.03 + 4e5*0.015 + (profit-1e6)* 0.01;
    printf("应发放奖金总额：%.2f\n",reward);
}        