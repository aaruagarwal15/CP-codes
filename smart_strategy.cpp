#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll d, x[q];
        ll int val = 1;
        for(ll i=0;i<n; i++){
            cin>>d;
            val = val * d;
        }
        ll int res;
        for(ll i=0;i<q;i++){
            cin>>x[i];
        }
        for(ll k=0; k<q;k++){
            if(val == 0){
                res = 0;
            }
            else{
                res = x[k]/val;                
            }
            cout<<res<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}
