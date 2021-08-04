
#include <stdio.h>

int main(int argc, char const* argv[]){

    int i = 0;

    printf("int is %lu\n", sizeof(int));
    printf("address is %lu\n", sizeof(&i));

    return 0;
}

