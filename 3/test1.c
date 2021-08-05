
/**
 * 测试加号是否从右往左计算
 */

#include <stdio.h>

int main(void){
    int i = 0;
    int result;

    result = (i+1) + (i+2); // 左右则是1+3 = 4 ；右左则是3+2 = 5
    // 答案为3，因为括号优先级高，先算括号中的。另外加减乘除运算从左往右，单目加减是正负的意思，从右往左。

    printf("result is %d\n", result);

    return 0;
}
