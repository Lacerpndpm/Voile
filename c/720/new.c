#include <stdio.h>

// 定义一个函数，该函数被调用一次打印一次“Smile!”，可控制是否换行
void print_smile(int newline) {
    printf("Smile!");
    if (newline) {
        printf("\n"); // 如果newline为真，则打印换行符
    }
}

int main() {
    // 控制行数
    for (int i = 3; i >= 1; i--) {
        // 控制每行的“Smile!”数量
        for (int j = 0; j < i; j++) {
            print_smile(j < i - 1); // 调用函数打印“Smile!”，除了每行的最后一个外都换行
        }
        // 每行最后一个“Smile!”打印完后换行
        print_smile(1);
    }

    return 0;
}