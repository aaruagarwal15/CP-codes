#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x,ans = 0;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x > k) 
                ans += (x-k);
        }
        cout<<ans<<endl;
    }
}