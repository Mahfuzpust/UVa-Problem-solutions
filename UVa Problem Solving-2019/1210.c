#include<stdio.h>
int a[10001];
int b[10001];
int c[10001];
int main()
{
    int y,z,x,k;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<10001;y=y+2)a[y]=-1;
    for(y=3,x=1,k=1;y<10001;y=y+2){
        if(a[y]==0){
            b[k]=y;
            k++;
        };
        for(z=y+y;z<10001;z=z+y)a[z]=-1;
    }
    for(x=0;x<k;x++){
        z=0;
        for(y=x;y<k;y++){
            z=z+b[y];
            if(z>10000)break;
            c[z]++;
        }
    }
    int n;
    while(scanf("%d",&n)&&n>0)
        printf("%d\n",c[n]);
}

