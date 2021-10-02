#include <stdio.h>
#include <math.h>
int main(void)
{
    float faHeight=0,moHeight=0,youHeight=0;
    char sex='\0',habsport='\0',habeat='\0';
    printf("请问你是男性(M)还是女性(F):\n");
    scanf("%c",&sex);
    printf("请输入你父亲和母亲的身高(厘米)\n");
    scanf("%f" "%f",&faHeight,&moHeight);
    printf("请问你喜欢运动吗?(Y/N)\n");
    scanf(" %c",&habsport);
    printf("请问你有良好的饮食习惯吗?(Y/N)\n");
    scanf(" %c",&habeat);
    if ((int)sex == 'M' || (int)sex == 'm')
        youHeight = (faHeight + moHeight)*0.54;
    else
        youHeight = (faHeight*0.923 + moHeight)/2;
    if ((int)habsport == 'Y' || (int)habsport == 'y')
        youHeight = youHeight*1.02;
    if ((int)habeat == 'Y' || (int)habeat == 'y')
        youHeight = youHeight*1.015;
    printf("你的预测身高为：%5.1f厘米\n",youHeight);
}