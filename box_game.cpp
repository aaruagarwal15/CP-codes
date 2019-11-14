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
        int p;
        cin>>p;
        ll a[n+2];
        ll small = INT_MAX;
        ll large = INT_MIN;
        int pos_large, pos_small;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
            if(a[i] > large){
                large = a[i];
                pos_large = i;
            }
            if(a[i] < small){
                small = a[i];
                pos_small = i;
            }
        }        
        int x = 0;
        int val;
        if(k%2 !=0){
            if(p == 0){
                val = large;
            }
            else if(p == 1){
                val = small;
            }
        }
        else if(k%2 == 0){
            if(p == 0){
                a[0] = INT_MAX;
                a[n+1] = INT_MAX;
                val = INT_MIN;
                for(int i=1; i<=n; i++){
                    if(a[i-1] > a[i+1]){
                        x = a[i+1];
                    }
                    else x = a[i-1];
                    if(x > val) val = x;
                }
            }
            else if(p == 1){
                a[0] = -1;
                a[n+1] = -1;
                val = INT_MAX;
                for(int i=1; i<=n; i++){
                    if(a[i-1] < a[i+1]){
                        x = a[i+1];
                    }
                    else x = a[i-1];
                    if(x < val) val = x;
                }
               
            }
        }
        cout<<val<<endl;
    }
    return 0;
}
