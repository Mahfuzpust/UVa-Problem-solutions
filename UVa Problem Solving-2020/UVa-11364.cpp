#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,d,arr[1000];
    cin >> t;
    while(t--)
    {
        cin >> n;
        int max1=0,min1=10000;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];

            if(max1<arr[i])
                max1=arr[i];
            if(min1>arr[i])
                min1=arr[i];
        }
        d = (max1-min1)*2;
        cout << d <<endl;
    }
}
