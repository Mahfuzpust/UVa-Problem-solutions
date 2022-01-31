#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long R,N,s1,s2,s3,i=1;
    while(cin >> R >>N)
    {
        if(R==0&&N==0)
            break;
       s1=R-N;
       s2=s1/N;
       s3=s1%N;
       if(s3>0)
        s2=s2+1;
       if(s2>26)
         cout<<"Case "<<i<<": impossible"<<endl;
            else
        cout<<"Case "<<i<<": "<<s2<<endl;
        i++;
    }
    return 0;
}
