#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        sort(p, p+n, greater<int>());
        int sum = 0;
        for(int i=0; i<n; i++){
            int x = p[i]-i;
            if(x > 0){
                sum = ((sum % MOD)+(x%MOD)%MOD);
            }
        }
        cout<<sum % MOD<<endl;
    }
}