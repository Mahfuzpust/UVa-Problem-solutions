#include<stdio.h>
int main()
{
    int a,b,c,as,bs,cs;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        as= a*a;
        bs=b*b;
        cs=c*c;
        if((as+bs==cs)||(bs+cs==as)||(cs+as==bs))
        printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
