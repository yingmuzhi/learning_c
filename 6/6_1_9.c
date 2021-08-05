/**
 * char字符类型：既是整数也是字符。
 */
#include <stdio.h>

int main(){
    char c, d, e;
    c = 1;
    d = '1';
    
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    scanf("%c", &e);
    printf("e = %d\n", e);
    printf("e = \'%c\'\n", e);

    return 0;
}


// 用单引号'1'来表示字符
// scanf("%d %c", &d, &c);尽量在"%d %c"中增加空格.
