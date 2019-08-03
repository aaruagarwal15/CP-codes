#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n], ans[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        /* cout<<"INPUT: ";
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        } */
        ans[n-1] = 1;
        for(ll j=n-2; j>=0; j--){
            if(a[j]*a[j+1] < 0){
                ans[j] = ans[j+1]+1;
            }
            else{
                ans[j] = 1;
            }
        }
        for(ll j=0; j<n; j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}