#include <stdio.h>
int count = 0;
void h(int n, char from, char to, char temp)
{
    if (n == 1)
    {
        count++;
        printf("step%d\n�ƶ���1��%c��%c\n", count, from, to);
    }
    else
    {
        h(n - 1, from, temp, to);
        count++;
        printf("step%d\n�ƶ���%d��%c��%c\n", count, n, from, to);
        h(n - 1, temp, to, from);
    }
}
int main()
{
    int n;
    printf("һ������:");
    scanf("%d", &n);
    h(n, 'A', 'C', 'B');
}