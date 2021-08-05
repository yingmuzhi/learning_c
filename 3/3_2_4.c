/*
 * 多路分支，switch语句
 */

#include <stdio.h>

int main(){
    int type;

    scanf("%d", &type);

    switch(type){
        case 1:
            printf("1\n");
            break;
case 2:
            printf("2\n");
            break;
default:
            printf("null\n");
            break;
    }

    return 0;
}

// 1.switch(type){} type为int型整数
// 2.break带它离开整个switch，是用break进行case和case之间进行分割
// 3.case后面跟的是个常量，或者const int ONE = 1(c99)
