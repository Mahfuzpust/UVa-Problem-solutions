#include<stdio.h>
int main()
{
    int t,n,m,c,count,r,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        m=n;
        c=0;
        while(m>0){
            m/=10;
            c++;
        }
        c=c*9;
        c=n-c;
        for(i=c;i<n;i++){
            r=i;
            count=0;
            while(r>0){
                count+=r%10;
                r/=10;
            }
            if(count+i==n){
                printf("%d\n",i);
                break;
            }
        }
        if(i==n)printf("0\n");
    }
}

