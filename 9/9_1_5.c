/*
 * 指针与const
 */
#include <stdio.h>

void func(const int *);

int main(){
    {

    int i = 1;
    const int *p = &i;
    int *p2 = &i;
    *p2 = 2;
    printf("*p is %d\n", *p);
        
    }

    {
        const int a[] = {1, 2, 3};
        int *p = a;
        p[1] = 4;
        printf("a[1] is %d\n", a[1]);

    }

    {
        int temp = 0;
        func(&temp);
        printf("temp is %d\n", temp);
    }

    return 0;
}

void func(const int *p){
    int *p2 = p;
    *p2 = 2;
    
    return;
}


// 1.指针是const，表示一旦得到了某个变量的地址，就不能再指向其他变量了
//      int *const q = &i; // q是const
//      *q = 1; // ok
//      q++; // error
// 2.所指是const，表示不能通过这个指针去修改那个变量(并不能使那个变量成为const)
//      const int *p = &i;
//      *p = 26; // error (*p)是const，不嫩通过*p来修改p地址所指的值
//      i = 26; // ok
//      p = &j; // ok，通过修改p指向的地址来进行修改
// 3.判断哪个被const了的标志是看const和*的相对位置，
//      如果const在*前面则是，所指是const
//      如果const在*后面则是，指针是const，是常量指针（修饰的是指针）
// 4.const数组
//      const int a[] = {1, 2, 3};必须通过初始化来赋值
// 5.所以如果不想让人修改你的指针指向的值，可以在书写函数的时候将函数原型写成func(const int *);
//      但是人家可以在函数体中通过int *p2 = p来进行修改
//      故const int *p 的意思是无法通过p这个指针来修改 “该地址上的值”， 但是可以通过int *p2 = p 声明一个新的指针p2指向同样的地址，通过这个新的地址p2来 “更改该地址上的值”.
//
