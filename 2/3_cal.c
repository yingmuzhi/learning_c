
/**
 * 运算分为运算符和算子
 * /是整除 \是转义字符 %是取余
 * 预算优先级 和 数学运算顺序相同，但是赋值运算符优先级最低，且运算顺序自右向左（单目运算符-,+也是自右向左进行）
 * result = a = b = 3+c; // 先计算c+3，再等于b，...
 *
 * 交换变量a,b。则需要一个暂存变量temp用来暂时存储原先的值;
 * 可以使用断点进行调试
 *
 * 可以使用 复合运算符方便计算 +=,-=,*=
 *  total *= sum+12;  等价于total = total * (sum+12);
 * 递增递减运算符++,--是单目运算符
 *  count++; 后缀形式 将count的值赋给左值再将count加1
 *  ++count; 前缀形式 将(count+1)后的值赋给左值。两种方法都会将count+1
 *  建议不要写入表达式中
 */

