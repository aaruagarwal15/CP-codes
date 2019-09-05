#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll xf;
        cin>>xf;
        ll x = 1;
        ll y = 1;
        ll b = 0;
        while(1){
            b++;
            int j = sqrt(y);
            x = j+1;
            y += (x*x);
            if(xf < x){
                cout<<b<<endl;
                break;
            }
            if(xf == x){
                cout<<b+1<<endl;
                break;
            }
        }
    }
    return 0;
}