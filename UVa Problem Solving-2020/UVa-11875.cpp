#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,arr[20],mid,res;
    cin>> m;
    for(i=0;i<m;i++)
    {
          cin>>n;
          for(j=0;j<n;j++)
            cin >> arr[j];
        sort(arr, arr+n);
        mid=(n+1)/2;
        res=arr[mid-1];
        cout <<"Case " << i+1<<": "<< res<<endl;
    }
}
