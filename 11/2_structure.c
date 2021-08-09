
/**
 * 结构体
 * 声明结构类型
 *      struct data {
 *          int month;
 *          int day;
 *          int year;
 *      };
 *      struct data today;
 *
 *      today.month = 07;
 *      today.mothg = 15;
 *      today.year  = 2021;
 * 注意pay attention to, 我们经常将结构体的声明放在函数的外部作为全局变量进行声明，这样就和函数同等地位，可以被多个函数所使用。
 *      struct {
 *      } p1, p2; // p1, p2是两个结构变量的变量名
 *      struct point {
 *      } p2, p2; // p1, p2是两个结构变量的变量名, 结构变量叫做point
 * 
 * 结构初始化
 *      struct data today = {07, 15, 2021};
 *      struct data thisMonth = {.month = 7, .year = 2021}; // 局部变量，未赋初始值则随机。但是此处和数组一样，给一部分值赋予初始值，则剩余值默认为0，如.day == 0;
 *      
 * 结构的运算
 *      p1 = (struct point){5, 10};
 *      p1 = p2; // 可以直接将整体赋值，和数组完全不同。
 *
 * 结构作为值传入函数的时候，传入的是外面那个结构的克隆体，而不是指针。故在函数中进行了修改，外面的局部变量的值也不会改变。
 * 故我们往往可以作为返回值返回或者通过传指针的方式传入函数，以结构指针作为参数。
 *
 * 指向结构的指针，如下
 *      (*p).month = 12;
 *      p->month = 12; // p所指的那个结构的month
 * 
 * 常用的小套路
 *      struct point *getStruct(struct point *p){
 *          ...
 *          return p;
 *      }
 *      // 巧妙
 *      *getStruct(&y) = (struct point){1, 2};
 *
 * 结构数组
 *      struct date dates[100]; // 理解起来是很简单的，把[]给去掉就很好理解了。相当于一个dates[0]就是一个struct date 类型的。
 *      struct date dates[] = { {4, 5, 2005}, {2, 4, 2005} }; // 虽然数组和结构体的初始化都用{}大括号，但是两者是很不相同的。括号中不填写值[]的时候只能在传参数或者如该方法初始化的时候使用
 * 
 */

/**
 * 类型定义
 * 使用typedef自定义数据类型
 *  C语言使用typedef的功能来定义一个已有的数据类型的新名字。比如
 *      typedef int Length; // 使得Length成为int类型的别名
 *      Length a, b, len;
 */

