
/**
 * 测试typedef定义字符串数组
 */

#include <stdio.h>

int main(int argc, char const *argv[]){
    // typedef char *a[10] SStrings;
    typedef *char[10] SStrings; // why?不能compile
    // typedef char *[10] SStrings;
    typedef int Length;

    return 0;
}

