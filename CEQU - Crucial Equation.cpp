#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    int t;  cin>>t; int i=1;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%__gcd(a,b)){
            cout<<"Case "<<i<< ": "<< "No"<< "\n";
        }
        else cout<<"Case "<<i<< ": "<< "Yes"<< "\n";
        i++;
    }
    return 0;
}

