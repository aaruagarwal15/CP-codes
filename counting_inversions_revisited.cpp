#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                if(a[i] > a[j]){
                    ans += (k*(k+1))/2;
                }
                else if(a[i] < a[j]){
                    ans += ((k*(k+1))/2)-k;
                }
                else{
                    ans += 0;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}