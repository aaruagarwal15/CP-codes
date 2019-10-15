#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        ll i=0, total_profit = 0;
        ll max = -1, d1, d2;
        while(true){
            ll profit = (a - pow(2,i)); 
            total_profit += profit;
            if(total_profit > max){
                max = total_profit;
                d2 = (i+1); 
            }
            if(total_profit < 0){
                d1 = i;
                break;
            }
            i++;
        }
        cout<<d1<<" "<<d2<<endl;
        
    }
    return 0;
}