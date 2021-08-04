
/**
 * 指针变量就是记录地址的变量
 * 指针变量就是用来保存地址的变量，一般具有的定义如下
 *      int i;
 *      int* p = &i; // 所以当我们说p指向i的时候，我们的意思是p里面的值是i的地址
 *      int* p, q; // p是一个指针变量，q是一个普通的int变量
 *      int *p, q; // 同上，p是一个指针，q是一个int变量。*p是一个int，我们是把*加给了p，并没有把*加给int。
 *
 * 指针变量，变量的值是内存的地址
 *  普通变量的值是实际的值
 *  指针变量的值是具有实际值的变量的地址
 *
 * 作为函数参数的指针
 *      void f(int *p);
 *      f(&i);
 * 则在函数f里面是可以通过这个指针访问外面的这个i的
 *
 * 使用*访问那个地址上的变量。*是一个单目运算符，用来访问指针的值所表示的地址上的变量。可以做左值也可以做右值。
 * int k = *p;
 * *p = k + 1;
 * *--解地址运算符
 * &--取地址运算符
 *
 * C语言的函数传递传的是值，而传指针的意思也是传值，不过传的是指针的值罢了。
 *
 * 指针的运算符*&是互相反作用的
 *
 * int i; scanf("%d", i); // 不一定会报错是因为，编译器64位架构，它以为你输入的8字节的int是一个地址的二进制，比如7，但是地址为7的地方可能不能写值。但是不论如何，它写的地方都不可能是地址为&i上的i的值。
 */
