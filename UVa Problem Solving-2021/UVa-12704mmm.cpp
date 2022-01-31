#include<bits/stdc++.h>
using namespace std;


int main()
{
    double x,y,r;
    int tc;
    scanf("%d", &tc);
    while(tc--){
        cin>> x>> y>> r;
        double a = (x*x)+(y*y);
        a=sqrt(a);
        double m=r+a;
        double n=r-a;
        printf("%.2lf %.2lf\n",n,m);
    }
    return 0;
}
