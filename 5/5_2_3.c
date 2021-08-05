/**
 * 跳出多层嵌套循环
 */

#include <stdio.h>

int main(){
    int one, two ,five, x, exit;
    
    printf("how much yuan you wanna get?\n");
    scanf("%d", &x);

    for (one = 1; one <x*10; one++){
        for (two = 1; two <x*10/2; two++){
            for (five = 1; five <x*10/5; five++){
                if (one + two*2 + five*5 == x*10){
                    printf("%d one, %d two and %d five should do %d yuan\n", one, two, five, x);
                    exit = 1;
                    break;
                    }
                }
            if (exit == 1) { break; }
        }
        if (exit == 1) break;
    }
    
    return 0;
}

//1.跳出多重嵌套循环的方法是用exit==1作为条件判断
//2.使用break接力跳出循环
//3.也可以用goto out;
//      out:

