#include <stdio.h>
#include <stdlib.h>
int main()
{
    int gd=0;
    int bd=0;
    int choose;
    printf("放暑假\n");
    while(gd<=4&&bd<=2)
    {
    printf("学习/玩游戏？(1/0)>:");
    scanf("%d",&choose);
    if(choose==1)
        {
        gd++;
        printf("敲一行代码:%d/5\n",gd);
        }
    else
        {
        bd++;
        printf("摸鱼真爽%d/2\n",bd);
        }
    }
    if(gd==5)
    {
        printf("好结局\n");
    }
    else
    {
        printf("坏结局\n");
    } 
    system("pause");
    return 0;
}