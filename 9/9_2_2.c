/**
 * 动态内存分配
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    void *p;
    int cnt = 0;
    while ( (p= malloc (100*1024*1024)) ) {
        cnt ++;
        printf("%d\n", cnt);
    }
    printf("分配了%d00MB的空间\n", cnt);

    return 0;
}


// 1.c99之前动态内存分配:
//      int *a = (int*)malloc(n*sizeof(int));
// 2.malloc 在 #include<stdlib.h>的头文件中
//      malloc返回的是void *, 所以我们往往需要使用(int *)进行强制转换
//      malloc是运行时候才确定的，malloc后可以将其直接当做数组使用
//      malloc结束的时候需要归还，即使用free()函数。free(a);
//      如果申请失败则返回0，或者NULL
//      void* malloc(size_t size);
// 3.free()把申请得来的空间还给系统，系统会记得他分配给了你多少，所以要原封不动归还
//      但是可以free(NULL);
//      故一般的好习惯是，声明指针变量的时候都用void *p = 0; int *cnt = 0; 赋初值都赋予0或者NULL，
//                                              free(NULL); 结尾处都归还0指针
// 4.malloc和free用不好会导致内存漏洞，但是操作系统会保证当程序运行完成后，“哗”一下，这些东西全没了。
//
