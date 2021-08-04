
/**
 * %d中的d的缩写是十进制decimal的缩写，指的是输入输出按十进制进行解释。
 * 统一一下类型，以后整数类型全部使用printf%d scanf%d int
 *
 * 用于显示不同整型的大小
 * 在terminal中输入"gcc 1.c -o test",则-o后面的跟着可执行文件的名字,使用./test将可执行文件运行
 * 在terminal中输入"gcc 1.c -o test -m32",-m32指的是使用32bit进行编译
 * int和long取决于编译器CPU，通常等于一个字的大小，int就是用来表达寄存器的
 *
 * 在计算机中计组可以知道，计算机内部一切都是二进制
 * 如int如果为4Byte，则能表示的范围是-2^(32-1)到2^(32-1)-1。其中0输入正数部分。由于计算机内部c中的整数，如int是以补码形式存储整数，所以补码：10000000存储的是最大的负数
 * 如果不需要负数表达形式，全部都是使用正数表达则考虑使用unsigned关键字，如
 *      unsigned char c = 255; // 如果不是unsigned类型，则输出为-1
 *      unsigned的初衷是为了做移位操作
 * 
 * 在计算机内部都是二进制形式，所以不管你在计算机内部是什么数，重点是我们如何来看它
 * 整数的形式有很多种，但是输入输出的形式只有两种int或者long long，所有所需字节数小于等于int的全部会变成int。long long同理。
 *      %d: int
 *      %u: unsigned
 *      %ld:long long
 *      %lu:unsigned long long
 * （point）printf("");在传入值后会将传入的值扩展为int类型在进行输出。
 * 
 * 十六进制何八进制
 *      char c = 012;// 为八进制
 *      char b = 0x12;// 为十六进制
 * 但是如果输出的时候想让它以其他进制形式进行输出则需要改变输出形式
 *      printf("c=0%o, i=0x%X\n", c, b);
 *
 * 为什么整数会有那么多类型，是因为早期为了和芯片的引脚数想匹配，硬件需要。
 * 今非昔比，没有特殊需要就选择int，一次内存的读写就是一个int（字 长），一次计算也是一个int，故选择更短的类型可能会使得计算更慢。
 * 现代编译器一般会设计内存对齐，所以更短的类型往往也有可能占据一个int的大小（虽然sizeof说它更小）
 * unsigned与否只是输出不同，内部计算是一样的。故不是硬件需要一般也不用unsigned
 * 故整数一般采用int类型
 *
 *
 * 
 */

#include <stdio.h>

int main(int argc, const char* argv[]){
    printf("sizeof(char)=%ld\n", sizeof(char));
    printf("sizeof(short)=%ld\n", sizeof(short));
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(long)=%ld\n", sizeof(long));
    printf("sizeof(long long)=%ld\n", sizeof(long long));

    char c = -1;
    int i = -1;
    printf("c=%u,i=%u\n", c, i);

    return 0;
}
