
/**
 * 指针和数组
 * 函数参数表中的数组实际上是指针
 *      sizeof(a) == sizeof(int *);
 * 但是可以用数组的运算符[]进行运算
 *
 * 所以以下四种函数原型等价：
 *      int sum(int *ar, int n);
 *      int sum(int *, int);
 *      int sum(int ar[], int n);
 *      int sum(int [], int);
 *
 * 实际上，数组变量是特殊的指针
 *  数组变量本身表达地址，所以
 *      int a[10]; int *p = a; // 不需要用&取地址
 *  但是数组的单元表达的是变量，需要用&来取地址
 *      如p = &a[1];
 *      a == &a[0]; // a[0]的地址就是a的值
 *  []运算符可以对数组做，也可以对指针做
 *      p[0] <==> a[0];
 *      *p == p[0]; // 首先p得是指针变量，不能是普通变量。对于指针变量p而言，*p和p[0]是相等的，都是p所指地址的值
 *  同样的，*解地址运算符也可以对数组做
 *      int a[12] = {0};
 *      *a = 1; // 等于a[0] = 1;
 * 
 * 实际上，数组是“常量指针”
 *      int a[12] = {0};
 *      int b[] = a; // 这个是不可以的,因为int b[] <==> int * const b; 是一个常量指针
 *      int *q = a;  // 这个是可以的
 *
 * const与指针搭配（只适用于C99）
 * [指针不可修改]常量指针/指针是const：表示一旦得到了某个变量的地址，就不能再指向其他变量
 *      int *const q = &i;  // q是const
 *      *q = 26;            // ok
 *      q++;                // error
 *
 * [通过指针不可修改]所指是const：表示不能通过这个指针去修改那个变量（并不能使得那个变量变成const）
 *      const int *p = &i;
 *      *p = 26;    // error,(*p)是const
 *      i = 26;     // ok
 *      p = &j;     // ok
 *
 * 判断那个被const了的标志是const在*前面还是后面
 *
 * 我们可以[通过指针不可修改]这个方法将一个非const的值转换成const的
 *      void f( const int *x ); // 当要传递的参数的类型比地址大的时候，常用这个手段，既可以用较少的字节数传递值给参数，又能避免函数对外面的变量的修改。
 *
 * const数组。数组属于[指针不可修改]常量指针，这里的const表明数组的每个单元都是const int，所以必须通过初始化进行赋值。可见test2
 * 所以我们可以使用const int a[]用来保护数组值
 *      int sum(const int a[], int length);
 *
 */

void minmax(int a[], int length){
    printf("in minmax\tsizeof a[] is %lu\n", sizeof(a));
    return ;
}

int main(int argc, const char *argv[]){
    int a[12] = {0};

    printf("in main  \tsizeof a[] is %lu\n", sizeof(a));

    minmax(a, 12);
    return 0;
}
