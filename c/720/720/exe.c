#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    printf("你的电脑还有五分钟关机\n");
    char input[20] = {0};
    //system("shutdown -s -t 300");
    while (1)
    {
        printf("肯德基疯狂星期四,Vivo50?\n是/否\n");
        scanf("%s", input);
        if (strcmp(input, "是") == 0)
        {
    //        system("shutdown -a");
            break;
        }
        else
        {
            printf("答案错误\n");
        }
    }
}