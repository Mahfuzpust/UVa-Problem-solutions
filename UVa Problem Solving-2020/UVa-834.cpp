#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i;
    while(cin >> n >> d)
    {
    int m = n/d ;
    cout<<"["<< m;
    n=n%d;
  //  cout << n <<" " << d << endl;
    swap(n,d);
   // cout << n <<" " << d;

    for(i=0;i<n;i++)
    {
        if(i==0)
            cout << ";";
        if(i>0)
            cout << ",";
        cout << n/d;
        n=n%d;
        swap(n,d);
    }
    cout << "]"<<endl;
    }
}
