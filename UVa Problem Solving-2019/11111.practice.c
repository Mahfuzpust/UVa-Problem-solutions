#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int max;
    for(int i=0;i<N;++i)
    {
        int num;
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
    }
    printf("%d",max);
}
