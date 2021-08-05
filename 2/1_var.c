
/**
 * 变量定义 <类型名称><变量名称>; int my;
 * 变量的名字在程序中叫做标识符，只能由字符，数字下划线组成，数字不能做开头，不能是c语言特殊字符如main
 * =等号表示赋值，赋值发生在定义变量的时候叫做初始化，如果int j;则此为声明，没有初始化，会在内存中随机分配一个地方给他，那个内存中是什么值他就是什么值。
 * 不能用连等赋值
 * c语言是强类型，类型确定后不能改变
 * c99定义变量可以在任何地方，但是c99前 ansi c需要在最开头把变量全部声明
 * scanf中f指得是format
 *
 * 100是常量，直接量(magic number)。但是更好的方式是定义一个常量如
 *      const int AMOUNT = 100;
 * 常量不能做左值，一般常量全部大写字母
 * 
 * scanf可以同时读入多个值
 *      scanf("%d %d", &a, &b);
 *      printf同理
 
 */

#include <stdio.h>

int main(int argc, const char* argv[]){
    int price = 0;

    printf("请输入金额元：");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找您%d元\n", change);

    return 0;
}
