/**
 * 数据类型
 */

#include <stdio.h>

int main(){
    printf("sizeof(char) = %ld\n", sizeof(char));
    printf("sizeof(short) = %ld\n", sizeof(short));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("sizeof(long long) = %ld\n", sizeof(long long));
    return 0;
}


// 1.数据类型分为
//      整数: char, short, int, long, long long
//      浮点数: float, double, long double
//      逻辑: bool
//      指针:
//      自定义类型:
// 2.浮点数输出的时候用%f, 浮点数输入的时候用%lf
// 3.表达数的范围: char<short<int<float<double
// 4.内存中所占据的大小: 1-16bytes
// 5.使用sizeof(type)，输出在内存中占据字节数
//      sizeof是静态运算符，编译时刻就已经确定了。即编译时将"sizeof(a++)"这一个整体用数字进行替换，而并不会对"sizeof(a++)"括号中的运算式进行操作。
//
// 6.使用"gcc 6_1_1.c -o test",其中test是生成可执行文件的文件名, 使用"gcc 6_1_1.c -o test2 -m32"则是用32位机器进行编译
//
// 7.char 1字节，short 2字节，int和long和cpu还有编译器有关，long long 8字节
