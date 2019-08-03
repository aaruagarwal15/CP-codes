#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        int flag = 0;
        for(ll i=0;i<n-1;i++){
            if(a[i]<k){
                for(ll j=i+1; j<n; j++){
                    if(a[i]+a[j] == k){
                        flag = 1;
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            
        }
        if(flag == 0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}