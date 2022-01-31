#include<stdio.h>
int main()
{
    int a[5],m,i,y=0;
    while(scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
        for(i=0;i<5;i++){
            scanf("%d",&m);
            if(a[i]==m)y=1;
        }
        y==1?printf("N\n"):printf("Y\n");
    }
}

