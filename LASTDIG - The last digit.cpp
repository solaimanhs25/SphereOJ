#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll int binaryExponentiation(ll int a,ll int b,ll int m){
    ll int res=1;
    while(b){
        if(b&1) res=(res*a)%m;
        a=(a*a)%m;   b>>=1;
    }
    return res;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
   ll int a,b;
    cin>>a>>b;
 
    cout<<binaryExponentiation(a,b,10)<<endl;
    }
    return 0;
}
