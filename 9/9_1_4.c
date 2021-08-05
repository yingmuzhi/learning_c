/**
 * 指针与数组
 */
#include <stdio.h>

int main(){
    int a[]={1, 2, 3, 4, 5, 6};
    short *b;
    int *c = a;

    printf("short *b is %lu\n", sizeof(b));
    printf("int a[] is %lu\n", sizeof(a));
    printf("int a[1] is %lu\n", sizeof(a[1]));
    printf("int *c is %lu\n", sizeof(c));
    printf("c[1] is %d\n", c[1]);
    printf("b[1] is %d\n", b[1]);
    printf("a[1] is %d\n", a[1]);

    return 0;
}



// 1.数组和指针作为函数原型的形参的等价
//      int sum(int *ar, int length);
//      int sum(int ar[], int length);这两者等价
//      int sum(int *, int);
//      int sum(int [], int);
// 2.数组变量是特殊的指针
//      数组变量本身表达地址;
//      数组的单元表达的是变量，需要用取地址符号&, 如a==&a[0];
//      []运算符可以对数组用，也可以对指针用, 如p[0]==a[0];
// 3.int a[] --> int *const a; // a是个常量指针，不能指向别的地址
//
