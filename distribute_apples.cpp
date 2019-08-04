#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    ll n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll x = n/k;
        if(x%k == 0){
            cout<<"NO"<<endl;
        } 
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}