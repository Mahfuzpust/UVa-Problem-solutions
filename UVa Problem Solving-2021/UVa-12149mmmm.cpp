#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1 &&a!=0)
    {
        unsigned long long N,sum=0;
        for(N=1;N<=a;N++)
        sum=sum+(N*N);
        printf("%llu\n",sum);
    }
    return 0;
}
