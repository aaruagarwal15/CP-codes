#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        ll cnt = 0 ;
        for(ll i=0; i<n.length(); i++){
            if( n[i]!= '4' && n[i] != '7'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}