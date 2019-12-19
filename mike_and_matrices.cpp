#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    ll l;
    cin>>l;
    ll x,y, e1=0, e2=0;
    int flag1 = 0, flag2 = 0;
    for(ll i=0; i<l; i++){
        cin>>x>>y;
        if(x<=n && y <= m){
            e1 += a[x-1][y-1];
        }
        else{
            flag1 = 1;
        }
        if(y <= n && x<=m){
            e2 += a[y-1][x-1];
        }
        else{
            flag2 = 1;
        }
    }
    if(flag1 == 1) e1 = -1;
    if(flag2 == 1) e2 = -1;
    cout<<max(e1,e2)<<endl;
    return 0;
}