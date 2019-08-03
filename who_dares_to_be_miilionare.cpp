#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ans[n];
        char chef[n];
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=0;i<n;i++){
            cin>>chef[i];
        }
        ll win[n+1];
        for(int i=0; i<=n; i++){
            cin>>win[i];
        }
        int cnt=0;
        for(int i=0;i<n; i++){
            if(ans[i]==chef[i]){
                cnt++;
            }
        }
        int res;
        if(cnt == 0){
            res = win[0];
        }
        else if(cnt == n){
            res= win[n];
        }
        else{
            res=win[0];
	        for(int i=1;i<=cnt;i++){
	            if(res<win[i]){
                    res=win[i];
                }
	        }
        }
        cout<<res<<endl;

    }
    return 0;
}