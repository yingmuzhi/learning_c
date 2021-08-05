/**
 * 自动类型转换
 */
#include <stdio.h>

int main(){
    int i = 32768;
    short s = (short)i;

    printf("%d\n", i);

    short a = (int)(i/s);
    printf("%d\n", sizeof(a));

    return 0;
}

// 当运算符两边出现不一致的类型时，会自动转换成较大的类型。大的类型指的是表达的数的范围更大。
//      如char->short->int
//      int->float->double
// 对于printf，任何小于int的类型会被自动转换成int;float会被转换成double
// 但是对于scanf，输入是什么类型就是什么类型，不会自动转换
// 强制类型转换，要把一个量强制转换成另一个类型的量
// int i = (int)a / b; 是指把a强制转换成了int类型
// int i = (int) (a/b); 是指把a/b的结果强制转换成了int类型
