
/**
 * c语言的逻辑类型，bool类型
 * 导入库stdbool.h;之后就可以使用bool和true，false
 *      #include <stdbool.h>
 *
 * true对应1,false对应0,但是没办法使用printf输出true，false;
 *
 * 逻辑运算
 * &&与 ||或者 !非
 * 优先级 !>&&>||
 *      优先级别很低，只比赋值高一点点，所以才会有a>1||a<-1这种表达式
 * 逻辑运算符的短路
 *      由于逻辑运算符是自左向右进行的，故如果左边的结果已经能够决定结果了，就不会进行右边的计算。
 *      对于&&如果左边false则不做右边，对于||如果左边true则不做右边。
 *
 * 条件运算符
 *      count = (count > 20) ? count - 1 : count + 10;
 *      条件                条件满足时的值 条件不满足时候的值
 * 条件运算符优先级只比赋值高，条件运算符从左往右。不建议嵌套条件。
 *
 * ,逗号运算符号优先级最低，低于赋值运算符。
 * 逗号运算符一般在for()中用到，如for(i = 1, j = 2;;){}
 *
 *
 */

