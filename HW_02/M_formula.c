#include <stdio.h>
#include <math.h>
#include <quadmath.h>

__float128 arctan(__float128 x) //计算arctan的函数
{
  __float128 s,i,k;
  s=0;
  k=1;
  for(i=1;powq(x,i)/i>powq(10,-100);i+=2) //用精度判断循环结束
    {
      s+=k*(powq(x,i)/i);
      k=-k;
    }
    return s;
}

void main() //主函数
{
  __float128 t,pi,i1,i2,i3;
  int l;
  i1=1.0Q;
  i2=5.0Q;
  i3=239.0Q;
  t=4*arctan(i1/i2)-arctan(i1/i3);
  pi=4.0Q*t;
  printf("pi/4=%.40Qe\n",t);
  printf("pi=%.40Qe\n",pi);
}
  

  
  

