#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int i = 0;
    char input[20] = {0};
    srand(time(NULL));
    system("shutdown -s -t 300");
    Sleep(1000);
    while (1)
    {
        printf("����Խ���5�����ڹػ�\n");
        printf("\033[1;32m��ȷ\033[0m");
        printf("�ش��������ȡ��\n");
        printf("�ش�:��������?Yes/No\n");
        scanf("%s", input);
        if (strcmp(input, "Yes") == 0)
        {
            system("shutdown -a");
            break;
        }
        else if (strcmp(input, "No") == 0)
        {
            printf("��û����֪֮����?\n");
        }
        else
        {
            printf("�������,����Сд\n");
        }
    }
    printf("�����ϴ������www.xxxxxxxx.com:__________\b\b\b\b\b\b\b\b\b\b");
    int lower = 0, upper = 500;
    for (i = 0; i < 10; i++)
    {
        int random_number = lower + rand() % (upper - lower + 1);
        Sleep(random_number);
        printf("#");
    }
    printf("\nDown!\n���s���t��\n");
    system("pause");
}