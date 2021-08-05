/**
 * 指针使用的场景
 */

// 1.形如swap(int *a, int *b)函数，传入的参数实际上是需要保存带回的结果的变量
// 2.函数返回运算的状态(如0和-1)，结果通过指针返回
//      在c中只能通过返回0或者1来判断正确与否，而在cpp或者java中则可以通过异常机制来判断正确与否
// 3.int *p = 10;// 注意这个地方完全是错误的，因为int *p是本地变量，在没有赋予初值前指向的是一个你完全不清楚的随机的地址，而*p = 10，则将这个*p指向的地址对应的值赋予了10；
//      故指针变量必须先要赋值，赋予它地址
//
//