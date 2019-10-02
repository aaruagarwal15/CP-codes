#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd (ll a, ll b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans = gcd(a,b);
        cout<<ans<<endl;
    }
    return 0;
}