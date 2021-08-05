/*
 * 浮点数
 */
#include <stdio.h>

int main(){
    printf("请输入身高的英尺和英寸，"
            "如输入\"5 7\"表示5英尺7英寸:");

    int foot;
    int inch;

    scanf("%d %d", &foot, &inch);

    printf("身高是%f米. \n",
            ((foot + inch / 12.0) * 0.3048));

    return 0;
}

// 1.两个整数的运算结果只能是整数，如10/3*3 => 9 (直接丢掉多余的小数位)
// 2.当浮点数和整数放在一起运算时，C会将整数转换成浮点数，然后进行浮点数运算。如10+2)/12.0
// 3.或者可以定义变量的时候将int 改成 double或者float，如double foot，double inch
// 4.用double变量进行输出的时候用%f, 要使用printf("%f", foot);
//      输入的时候要用%lf, 用要使用scanf("%lf", foot);
// 5.
