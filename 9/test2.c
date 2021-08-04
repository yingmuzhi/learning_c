
/**
 * const数组
 */
#include <stdio.h>

int main(int argc, const char *argv[]){
    const int a[] = {0, 0};

    // output1
    printf("a[0] is %d\n", a[0]);

    int *hack = a;
    hack[0] = 1;
    
    // output2
    printf("a[0] is %d\n", a[0]);

    return 0;
}
