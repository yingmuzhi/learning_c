/**
 * 数组
 */

#include <stdio.h>

int main(){
    int temp;
    printf("temp is %d\n", temp);
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];
    scanf("%d", &x);
    while(x!=-1){
        number[cnt] = x;
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    if (cnt>0){
        int i;
        double average = sum/cnt;
        for (i=0; i<cnt; i++) {
            if (number[i]>average){
                printf("%d", number[i]);
            }
        }
    }
    
    return 0;
}

// 定义数组,<类型> 变量名称[元素数量],如int grades[100];
//      c99开始可以是int grades[number],即[]中可以填入变量
// 数组是一种容器，具有以下特点
//      其中的所有元素具有相同的数据类型
//      一旦创建，不能改变大小
//      数组中的元素在内存中是连续依次排列的
//      数组变量在内存中是依次排列的
//      c语言开始，数组下表从0开始标号，到数组元素总数-1，segmentation fault导致数组越界
// c语言本地变量不能默认得到初始值，即main{}函数中或者{}中的变量是不能默认得到初始值的。
//      因此对于数组，记得需要先将其初始化
// c语言中测试代码写到一个代码块中{}，这样方便注释和测试
// c语言的数组初始化
//      int a[10]; for (int cnt = 0;cnt<10;cnt++){}进行初始化
//      int a[]={1, 2, 3};
//      int a[3] = {1}; // 得到的是1 0 0
//      int a[3] = {[1] = 2, 3}; // 得到的是0 2 3 ;适用于稀疏数据
// 对于数组，求其数组所含有最多的元素可以用下面这个公式sizeof(a)/sizeof(a[0]);
//      sizeof(a)显示的是a这个数组总共占据的字节数
//      sizeof(a[0])显示的是a[0]这个元素占据的字节数
// 要把一个数组的所有元素赋值给另一个数组，不可以int a[10] = b;
//      需要一个一个遍历b的元素并赋值给a
// 遍历数组通常使用for循环，循环变量i从0到<数组长度的数。
//      如"for (int cnt = 0; cnt < MaxSize; cnt++){}"
// 数组作为函数的参数时，不能在[]中给出数组大小，而且不能再利用sizeof(a)/sizeof(a[0]);来计算数组元素个数
//      故将数组作为函数参数传递的时候应该如下传递"int search(int key, int a[], int length){}"需要将数组长度length单独传入
// 二维数组int a[1][1], 和矩阵一样，需要两重遍历
//      而int a[b, d]; 中，是运算符，表达的意思和a[d]是一样的
//      int a[][5] = {
//          {0, 1, 2, 3, 4,},
//          {2, 3, 4, 5, 6,},
//      };
// 
//
