#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,d,min,minTest;
    a=pow(2,-23); //float型数据的精度
    b=pow(2,-126);  //计算通过指数能表示的最小数据
    min=pow(2,-149);  //计算计算机能表示的最小数据
    minTest=pow(2,-150);  
    c=pow(10,-20);  //检验由于计算机二进制存储数据的方法带来的误差
    d=0.100001;
    printf("a  =%.50f\n",a);
    printf("b  =%.50f\n",b);
    printf("min=%.50f\n",min);
    printf("minTest=%.50f\n",minTest);
    printf("c  =%.50f\n",c);
    printf("d  =%.50f\n",d);
}
