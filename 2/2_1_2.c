#include <stdio.h>

int main(){
    int price = 0;
    printf("input ur money?\n");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找您%d元。\n", change);
    
    return 0;
}

// 1.变量用来保存数据
// 2.<类型名称><变量名称>;
//   如int price;
// 3.变量的名字叫做“标识符”；关键字不能用作标识符
// 4.scanf是一个函数，将结果读给price，前面需要&price
// 5.100是一个固定不变的数字，是常数。也可以写成const int AMOUNT = 100;// 尽量使用有意义的数字 ，不要用magic number

