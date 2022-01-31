#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, T;
	long long int a, b;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &n, &m);
		if(m > n)
			printf("impossible\n");
		else {
			b = (n - m)/2;
			a = m + b;
			if(a + b == n && abs(a - b) == m)
				printf("%lld %lld\n", a, b);
			else
				printf("impossible\n");
		}
	}
	return 0;
}
/*

#include<stdio.h>
int main()
{
    long int t,a,b,c,d,i;
    while(scanf("%ld",&t)==1)
    {
        i=0;
        while(i<t)
        {
            scanf("%ld%ld",&a,&b);
            if(b>a||(a-b)%2!=0)
                printf("impossible\n");
            else
            {
                c=(a-b)/2;
                d=c+b;
                printf("%ld %ld\n",d,c);
            }
            i++;
        }
    }
    return 0;
}*/
