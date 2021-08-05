/*
 * 比较大小
 */
#include <stdio.h>

int main(){
    int a, b;
    printf("input ur two numbers\n");
    scanf("%d %d", &a, &b);

    int max = b;
    if (a>b){
        max = a;
    }

    printf("bigger number is %d\n", max);
    return 0;
}

// 1.if 后面可以不跟大括号{},直接用一句话代替
// 2.if可以实现嵌套
//      if ()
//          if()
//          else
// 3.else总是和最近的if去匹配，除非加了大括号
// 4.tips ： if else始终跟上{}
// 5.if(){}  else if(){} else{}

