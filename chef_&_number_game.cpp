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
        ll cntp = 0, cntn = 0;
        for(ll i=0;i<n; i++){
            cin>>a;
            if(a < 0){
                cntn++;
            }
            else cntp++;
        }
        if(cntn == 0){
            cout<<cntp<<" "<<cntp<<endl;
        }
        else if(cntp == 0){
            cout<<cntn<<" "<<cntn<<endl;
        }
        else if(cntp > cntn){
            cout<<cntp<<" "<<cntn<<endl;
        }
        else if(cntn > cntp){
            cout<<cntn<<" "<<cntp<<endl;
        }

    }
    return 0;
}