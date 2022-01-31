#include<stdio.h>
#include<math.h>
int main()
{
    long long t;
    double u,v,d,t1,t2,t3;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        if(v>=u)
        printf("e\n");
        else
        {
            t1=d/u;
            t2=(d/sqrt(u*u-v*v));
            t3=t2-t1;
            if(t3<=0)
                printf("m\n");
            else
            {
                printf("Case %d: %0.3lf\n",i+1,t3);
            }
        }
    }
    return 0;
}
