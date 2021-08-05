/**
 * 函数定义
 */
#include <stdio.h>

void sum(int begin, int end){
    int i;
    int sum = 0;
    for (i = begin; i<=end; i++){
        sum += i;
    }
    printf("%lu %lu", sizeof(begin), sizeof(end));

    printf("dfsfsfsf");
}

int main(){
    double begin = 1.0, end = 2.1;
    sum(begin, end);
    
    printf("\n%lu", sizeof(begin));

    return 0;
}

// 分为函数头，返回类型，函数名，参数表，函数体
// 函数名(),这才是调用函数的正确方式。其中括号()起到了表示函数调用的重要作用，即使没有参数也需要使用括号()
// c的编译器会按照书写的顺序从上而下地分析写的代码，故需要先声明函数原型，后面再定义，默认猜测是int类型
//      函数原型需要包括名称，参数，返回类型
// 函数调用的时候会被强制转换类型，转换成函数需要的类型
//      但是c++和java更严格
// 声明和定义的形参名可以不同，声明甚至可以不跟形参名
