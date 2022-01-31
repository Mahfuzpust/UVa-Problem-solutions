#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    int T,i;
    cin >> t;
    for(T=0;T<t;T++){
        cin >> a >> b;
        int sum=0;
        for(i=a;i<=b;i++){
          //  if(i%2==0)
          //  if(i%2==0)
            sum=sum+i;
        }
        cout << "Case " << T+1<< ": " <<sum << endl;
    }
    return 0;
}
