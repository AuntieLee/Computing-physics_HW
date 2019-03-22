#include <stdio.h>
int main() //problem1_2
{
  double i,k,s,pi;
  k=-1;
  s=0;
  for(i=500000;i>=1;i=i-1)
    {
      s+=k*(1/(2*i-1));
      k=-k;
    }
  pi=4*s;
  printf("pi/4=%.20f\n",s);
  printf("pi=%.20f\n",pi);
}

