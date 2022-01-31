#include<stdio.h>
int main()
{
 long long  a,b;
 while (scanf("%lld %lld",&a, &b))
 {
  if (a>b)
   printf("%lld",a-b);
  else
   printf("%lld",b-a);
 }
 return 0;
}
