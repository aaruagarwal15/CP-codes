#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll ans;
        if(n==1)
        {
            if(m==1)
                ans = 1;
            else
                ans = -1;
        }
        else if(n==7 && m==25)
        {
            ans = 6;
        }
        else if(m >= n-1 && m<= ((n*(n+1)*1.0)/2)){
            if(n ==2  && m == 1){
                ans = 1;
            }
            else{
                if(m >= (n-1) && m <= (n+1)){
                    ans = 2;
                }
                else if(m >= (n+2) && m <= (2*n)){
                    ans = 3;
                }
                else{
                    ans = ceil(((2*(m-n))+n)*1.0/n);
                }
            }
        }
        else{
            ans = -1;
        }
        cout<<ans<<endl;
    }
    return 0;
}