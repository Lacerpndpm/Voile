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
    sleep(1);
    while (1)
    {
        printf("����Խ���1�����ڹػ�\n");
        printf("�ش�:��������?Yes/No\n");
        scanf("%s", input);
        if (strcmp(input, "Yes") == 0)
        {
            system("shutdown -a");
            break;
        }
        else
        {
            printf("�������\n");
        }
    }
}