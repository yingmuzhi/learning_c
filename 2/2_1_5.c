/*
 * 常量和变量的区别
 * 多项输入输出
 */
#include <stdio.h>

int main(){
    int a;
    int b;

    printf("请输入两个数字\n");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);

    return 0;
}

// 1.使用gcc进行编译
// 2.使用回车后才接收数字
