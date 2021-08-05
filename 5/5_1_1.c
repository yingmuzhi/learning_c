/**
 * for 循环
 */

#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    int fact = 1;
    
    int i = 1;
    for ( i = 1; i<=n; i++){
        fact *= i;
    }

    printf("%d!=%d\n", n, fact);

    return 0;
}

// 1.计算机的计算方法是枚举
// 2.break 跳出循环，continue进入下一个循环
