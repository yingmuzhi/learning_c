
/**
 * 指针的应用场景一：交换两个变量的值
 */
void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
// pa是一个变量名，它的变量类型是指针变量，它的实际的值叫做地址.
// *pa是pa的值(一个地址)所指向的值，简称：指针pa所指向的值。

/**
 * 指针的应用场景二：函数返回多个值，某些值就只能通过指针返回
 * 传入的参数实际上是需要保存带回的结果的变量
 */
void minmax(int a[], int len, int *max, int *min);

/**
 * 指针的应用场景二b：函数返回运算的状态，结果通过指针返回。
 * 如文件操作。
 * 好处在于可以把返回状态放入if语句中进行判断。
 * 因为C没有异常，别的语言如Java，C++则可以用异常进行处理。
 */

/**
 * 指针变量应该先给一个具体的地址，再用(*p)更改所指向地址的值。
 * 如int *p = 0; // 这个语句的意思是让p指向内存地址为0的地方。
 *      int i = 1;
 *      int *p = &i;
 *      *p = 3;
 */

