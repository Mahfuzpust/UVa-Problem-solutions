#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j;
    float r[8],a,c,r2[8],r3,r4[8],r5,r6,r7;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d",&m);
            for(i=0;i<m;i++)scanf("%f",&r[i]);
            sort(r,r+m);
            for(i=0,j=0;j<m;i++,j=j+2){
                r2[j]=r[m-1-i];
                r4[j]=r[i];
            }
            for(i=0,j=1;j<m;i++,j=j+2){
                r2[j]=r[i];
                r4[j]=r[m-1-i];
            }
            r3=r2[0]+r2[m-1];
            for(i=0;i<m-1;i++){
                a=r2[i];
                c=r2[i+1];
                r6=sqrt(((a+c)*(a+c))-((a-c)*(a-c)));
                if(r6<a||r6<c){
                    if(a>c)r3=r3+a;
                    else r3=r3+c;
                }
                 else  r3=r3+r6;
            }
            r5=r4[0]+r4[m-1];
            for(i=0;i<m-1;i++){
                a=r4[i];
                c=r4[i+1];
                r7=sqrt(((a+c)*(a+c))-((a-c)*(a-c)));
                if(r7<a||r7<c){
                    if(a>c)r5=r5+a;
                    else r5=r5+c;
                }
                else r5=r5+r7;
            }
            if(r3<r5)printf("%.03f\n",r3);
            else printf("%.03f\n",r5);
        }
    }
}
