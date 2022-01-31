#include <stdio.h>
int main(){
    int N,a[1000],i,j;
    while(scanf("%d",&N)==1){
        for(i=0;i<N;++i)
            scanf("%d",&a[i]);

        int ans=0;
        for(i=1;i<N;++i)
            for(j=0;j<i;++j)
                if(a[j]>a[i])
                    ans++;
        printf("Minimum exchange operations : %d\n",ans);
    }
    return 0;
}
