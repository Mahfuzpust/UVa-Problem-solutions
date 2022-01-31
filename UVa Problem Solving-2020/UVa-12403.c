#include<stdio.h>
#include<string.h>
int main()
{
    char array[900];
    int d,sum=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&array);
        if(strcmp(array, "donate")==0)
        {
            scanf("%d",&d);
            sum=sum+d;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
}
