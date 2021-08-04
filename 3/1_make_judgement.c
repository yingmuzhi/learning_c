
/*
 * 使用if else进行判断
 * 计算两个值之间的关系使用条件运算符，如== , !=, 等。输出的值只有0（不正确），1（答案正确）
 * 所有的关系运算符优先级比算术运算符低，但是比赋值运算符高。
 *  7>=1+3; // 答案为1
 *  int result = 2<3: // 答案为1
 * 关系运算符中，判断是否相等的优先级最低
 *  5<1==5>1; // 答案为0
 * 关系运算符中，运算从左往右进行
 *  6>5>4; // 答案为0，因为6>5得到1，1>4得到0
 * 
 * 使用//进行注释（comment）单行注释
 * 使用/ * * /进行多行注释,传统注释方法 ,ansi c
 *
 * 可以使用流程图形象地表达逻辑关系
 *
 * 写代码要让足够多的人看懂，而不是炫技，显得自己多么聪明。但是不是团队协作的时候可以尽可能的炫技，聪明的脑袋要多用才会聪明
 *
 * if可以没有圆括号，但是圆括号后面的分号那一句执行
 *  if (d>10) 
 *      ;
 * 
 * 可以使用多级判断
 * if (){}
 * else if (){
 *  ;
 * }
 * else {
 *  ;
 * }
 *
 * else 匹配方式，永远和最近的if匹配。if进栈的顺序一样，stack
 *
 * 级联判断else if (){};
 * 不要忘记大括号{}
 * if ()后面不要加分号
 *  if () ;
 * 错误使用== 和 = ,不能把赋值错误用成=;会出现warning错误，所以请尊重所有的warning，并把所有的warning全部改掉
 *
 * 代码风格注意缩进，创业要先规定代码风格
 *
 * 多路分支判断switch-case
 */
{
    switch (type) {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            printf("end\n");       
    }
}
/*
 * 
 * switch-case 直接跳到值的地方，但是switch(type)，type一定要是int类型，可以是常数计算表达式，如const int FIRST = 1;
 * 不能忘记break;否则跳转到该值后会继续往下运行case+1
 *
 */
#include <stdio.h>

int main(int argc, const char* argv[]){
    int my = 1;
    if ( my<1) {
        printf("error\n");
    }
    else {
        printf("right\n");
    }

    return 0;
}
