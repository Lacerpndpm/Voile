#include <stdio.h>
#include <stdlib.h>
int main()
{
    int gd = 0;
    int bd = 0;
    int choose;
    printf("去学校\n");
    while (gd <= 4 && bd <= 2)
    {
        printf("学习/摸鱼？(1/0)>:");
        scanf("%d", &choose);
        if (choose == 1)
        {
            gd++;
            printf("敲一行代码:%d/5\n", gd);
        }
        else
        {
            printf("摸鱼真爽%d/2\n", bd);
            bd++;
        }
    }
    if (gd == 5)
    {
        printf("好结局");
    }
    else
    {
        printf("坏结局");
    }
    system("pause");
    return 0;
}