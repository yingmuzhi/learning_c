/*
 * 取地址运算符
 */
#include <stdio.h>

int main()
{
    // 比价int 和 int *大小
    int i = 10;
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(int *));

    // 研究数组
    int a[10];

    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);

    return 0;
}




// 取地址运算符&指：获得变量的地址，他的操作数必须是变量
//      如printf("%x", &i);scanf("%d", &i);printf("%p", &i);
// 地址的大小是否与int相同取决于编译器, 取决于是32位架构还是64位架构
//      int i;printf("%p", &i);
// 数组a来说，&a = a = &a[0], 而&a[0]和&a[1]元素的地址差为sizeof(int)=4；
