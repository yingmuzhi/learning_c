
/**
 * 枚举，用枚举而不是定义独立的const int变量
 *      enum COLOR { RED, YELLOW, GREEN }; // COLOR是枚举类型名字，但是枚举类型名字往往并不真的使用，要用的是在大括号里的名字，因为它们才是常量符号，他们的类型是int，值依次从0到n
 * 枚举小套路，往往定义为全局变量
 *      enum COLOR { RED, YELLOW, GREEN, NumCOLORS };
 *
 *      void f(enum COLOR c);
 *
 *      int main(void){
 *          char *ColorNames[NumCOLORS] = {,,} // 一共有3个char *
 *
 *          enum COLOR myColor = RED;
 *          f(myColor);
 *          ...
 *      }
 * 
 * 声明枚举量的时候可以指定值
 *      enum COLOR { RED = 1, YELLOW, GREEN = 5 } // 1, 2, 5
 */
