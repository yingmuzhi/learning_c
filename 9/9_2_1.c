/**
 * 指针的运算
 */

#include <stdio.h>

int main(){
    {
    int i = 1;
    int *p = &i;
    printf("sizeof p is %lu\n", sizeof(p));
    //printf("sizeof p[] is %lu\n", sizeof(p[]));
    printf("sizeof p[0] is %lu\n", sizeof(p[0]));
    }

    {
        int a[3];
        printf("sizeof a is %lu\n", sizeof(a));
        printf("sizeof a[0] is %lu\n", sizeof(a[0]));
    }

    return 0;
}

// 1.所以对一个指针+1，是将其内存地址加上sizeof(指针类型)
//      *p -> ac[0];
//      *(p+1) ->ac[1];
//      *(p+n) <-> ac[n];是等价的
// 2.两指针相减的时候，值是要除以sizeof(类型)的
// 3.*p++，取出p所指的那个数据来，完事后再把p++；*的优先级虽然高，但是没有++高
// 4.指针可以做比较，即地址的比较
// 5.0地址表示特殊的事情,NULL是一个预定定义的符号，表示0地址
// 6.指针具有不同类型，不同类型的指针不能互相赋值
// 7.void* 表示不知道指向什么东西的指针，计算时与char* 相同，但是不想通。
//      指针也可以转换类型，void *q = (void *)p;
// 8.用指针做什么
//      需要传入较大的数据时用作参数
//      传入数组后对数组做操作
//      函数返回不止一个结果
//      需要用函数来修改不止一个变量
//      动态申请内存
//
