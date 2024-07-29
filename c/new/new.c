#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    const int frames = 4;     // 旋转动画的帧数，必须是常量
    const int delay = 200000; // 延迟时间（微秒）

    // 定义旋转字符数组
    const char *spinners[] = {
        "-",
        "/",
        "|",
        "\\"};

    // 计算数组的长度
    int num_spinners = sizeof(spinners) / sizeof(spinners[0]);

    while (1)
    { // 创建一个无限循环的动画
        for (int i = 0; i < num_spinners; i++)
        {
            // 清屏
            system("cls");

            // 打印旋转字符
            printf("%s\r", spinners[i]);

            // 刷新输出缓冲区
            fflush(stdout);

            // 等待一段时间
            usleep(delay);
        }
    }

    return 0; // 程序不会执行到这里，因为动画是无限循环的
}