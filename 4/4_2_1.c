/**
 * while 循环
 */
#include <stdio.h>

int main(){
    int x, ret = 0;

    scanf("%d", &x);
    int temp = x;
    while (x > 1) {
        x /= 2;
        ret ++;
    }
    printf("log2 of %d is %d.\n", temp, ret);
    
    return 0;
}
