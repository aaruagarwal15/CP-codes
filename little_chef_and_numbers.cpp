#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a;
        ll cnt0 = 0, cnt1 = 0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a > 2){
                cnt0++;
            }
            if(a == 2){
                cnt1++;
            }
        }
        ll ans;
        ans = cnt1*cnt0 + (cnt0*(cnt0-1))/2;
        cout<<ans<<endl;
    }
    return 0;
}