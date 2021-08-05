/*
 * 表达式
 * 计算时间差
 */
#include <stdio.h>

int main(){
    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;

    int t = t2 - t1;

    print("time minus is %d hours %d minutes", t/60, t%60);

    retrun 0;
}

// 1.运算符和算子
// 2.用除号取进制上的整数，用取余取余数
