#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        ll row[n]={0}, col[m]={0};
        ll x,y;
        for(ll i=0; i<q; i++){
            cin>>x>>y;
            row[x-1] += 1;
            col[y-1] += 1;
        }
        ll e1 = 0, e2 = 0, o1=0, o2=0;
        for(ll i=0; i<n; i++){
            if(row[i] % 2 == 0){
                e1 += 1;
            }
            else o1 +=1;
        }
        for(ll i=0; i<m; i++){
            if(col[i] % 2 == 0){
                e2 += 1;
            }
            else o2 +=1;
        }
        ll ans = (e1*o2) + (e2*o1);
        cout<<ans<<endl;
    }
    return 0;
}