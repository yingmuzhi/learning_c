
/**
 * c语言需要强调类型，如C++,Java,但是c会自动转换，cpp更加需要强制类型转换
 * 强类型语言可以确保类型安全，更早发现错误。
 * 面向底层的语言强调类型，面向应用的语言不强调类型，更加注重事务逻辑
 * c语言需要类型检查，但是安全检查并不充分
 *
 * c语言类型分为四大类
 * 整数(含逻辑bool)
 *  char, short, int, long, long long.
 * 浮点数
 *  float, double, long double
 * 指针
 * 自定义类型
 *
 * 输入输出的格式化不同：首先明确c里面float在使用过程中隐式转换成了double，所以printf时候用%f,%lf都可以。
 *  但是输入时候float占据4字节，long float（double）占据8字节且二者具有自己专门的数据排列格式。故double读入的时候一定使用scanf %lf(long float,即double)
 *
 * 所表达的数的范围不同:char<short<int=float<double(-m32中,int 为4字节)
 * 整数是补码形式，浮点数是编码形式
 *
 * sizeof()是一个运算符，能够给出某个类型或变量在内存中所占据的字节数
 *  如sizeof(int)
 *  或者sizeof(i)
 * sizeof()是静态运算符，即编译器在编译的时候会将"sizeof()"中的一整块进行替换，()括号内写的东西是不进行运算的。
 *
