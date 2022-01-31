#include<iostream>
using namespace std;
int main()
{
    int m,n,count,i;
    while(cin>>m){
        count=0;
        for(i=0;i<5;i++){
            cin>>n;
            if(n==m)count++;
        }
        cout<<count<<endl;
    }
}

