
/**
 * 动态申请内存，运行时确定数组大小（主要用于C99之前动态确定数组大小时候）
 * 需要先加载入stdlib.h库
 *      #include <stdlib.h>
 *      int *a;
 *      int numebr;
 *      scanf("%d", &number);
 *      a = (int *)malloc(number * sizeof(int));
 *      
 *      free(a);
 * 
 * malloc()函数的原型是
 *      void *malloc(size_t size); // 向malloc申请的空间的大小是以字节为单位的，返回的类型是void *，需要强制类型转换为自己需要的类型。
 *      (int *)malloc(n * sizeof(int));
 * 
 * 如果使用malloc申请空间失败了，则会返回0，或者叫做NULL，表示申请的空间已经用完了。
 *
 * 使用free()将申请得到的空间还给“系统”
 * 申请过的空间，最终都需要还。但是只能还申请来的空间的首地址。
 *
 * 小技巧：Free(NULL); // 是不会出错的，所以在初始化指针变量的时候我们会将指针赋予NULL指针。即：
 *      void *p = NULL;  // 将指针初始化为NULL
 *      free(p);         // 就算p未被赋予其他值也不会出错。
 *
 * free()过了就不能再free()了。
 * “纸上得来终觉浅，绝知此事需躬行”
 */


