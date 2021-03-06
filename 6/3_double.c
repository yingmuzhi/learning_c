
/*
 * %lf的缩写是long float，即double
 * 既然输入输出都可以用%lf，那以后统一一下类型，浮点类型全部使用printf%lf scanf%lf double。要注意scanf一定要是%lf。
 *
 *
 * 浮点类型范围
 * float 32bit 7位有效位，double 64bit 15位有效位。浮点数能表示的范围是从很接近0的地方到无穷大的一个范围。inf指的是无穷大(使用非零数/0得到)，nan指的是无效数字(0/0得到）。但是在整数中，不能除以0，只有浮点数有无穷大和不存在的说法。
 *
 * 浮点的输入输出
 *      float   scanf:%f    printf:%f,%e(%e是科学计数法)
 *      double  scanf:%lf   printf:%f,%e
 * 
 * 可以控制printf输出的位数
 *      printf("%e, %.16f\n", ff, ff); // %.16f表示输出小数点后16位，会进行四舍五入。
 *
 * 浮点数是一个近似值，比如1.2+1.2!=2.4。故不可以用浮点数进行值的比较。带小数点的计算器是不精确的。
 *
 * 浮点数默认类型double，带小数点的字面量是double。如果一定要使用float则需要使用f或者F的后缀用以表明身份。
 *
 * 整数是真正的二进制数，浮点数不是一个二进制数而是一个编码形式。
 *
 * 如何选择浮点类型？如果没有特殊需要则只使用double。现代CPU可以直接对double做硬件运算。
 */

