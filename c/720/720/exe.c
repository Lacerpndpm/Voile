#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    printf("��ĵ��Ի�������ӹػ�\n");
    char input[20] = {0};
    system("shutdown -s -t 300");
    while (1)
    {
        printf("�ϵ»���������ģ�Vivo50?\nYes/No\n");
        scanf("%s", input);
        if (strcmp(input, "Yes") == 0)
        {
            system("shutdown -a");
            break;
        }
        else
        {
            printf("�𰸴���\n");
        }
    }
}