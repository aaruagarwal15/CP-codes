#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        int cnt = 0 ;
        for(ll i=0; i<n; i++){
            if((a[i] + k)  > (sum - a[i])){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}