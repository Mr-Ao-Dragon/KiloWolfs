#include <stdio.h>
int main(void)
{
    char text='\0';
    printf("请输入一个字符\n");
    scanf("%c",&text);
    if ( ((int)text >= 65 && (int)text <= 90) || (((int)text) >= 97 && (int)text <= 122) )
        printf("你输入的是一个字母\n");
        else if ((int)text >= 48 || (int)text <= 57)
            printf("你输入的是一个数字\n");
            else
                printf("你输入的是非数字、非字母\n");
}