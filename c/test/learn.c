#include <stdio.h>
#include <stdlib.h>
int main()
{
    int gd=0;
    int bd=0;
    int choose;
    printf("�����\n");
    while(gd<=4&&bd<=2)
    {
    printf("ѧϰ/����Ϸ��(1/0)>:");
    scanf("%d",&choose);
    if(choose==1)
        {
        gd++;
        printf("��һ�д���:%d/5\n",gd);
        }
    else
        {
        bd++;
        printf("������ˬ%d/2\n",bd);
        }
    }
    if(gd==5)
    {
        printf("�ý��\n");
    }
    else
    {
        printf("�����\n");
    } 
    system("pause");
    return 0;
}