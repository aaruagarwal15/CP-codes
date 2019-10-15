#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

void getDivisors(ll n, ll a[1000000]) 
{ 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
            {
                a[i] += 1;

            }             
            else{
                a[i] += 1;
                a[n/i] += 1;
            }
                
        } 
    } 
} 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll max = -1, val;
        ll a[1000000]={0};
        for(ll i=0; i<n; i++){
            cin>>val;
            if(a[val] > max){
                max = a[val];
            }
            getDivisors(val, a);

        }
        cout<<max<<endl;
    }
    return 0;
}