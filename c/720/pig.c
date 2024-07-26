#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
    while (1)
    {
        printf("你电脑将在1分钟内关机\n");
        printf("回答:你是猪吗?Yes/No\n");
        scanf("%s", input);
        if (strcmp(input, "Yes") == 0)
        {
            system("shutdown -a");
            break;
        }
        else
        {
            printf("输入错误\n");
        }
    }
}