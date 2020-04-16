#include<bits/stdc++.h>
#include<iostream>
#include <iterator> 
#include <map> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int f[n], p[n];
        for(int i=0; i<n; i++){
            cin>>f[i];
        }
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[f[i]] = 0;
        }
        for(int i=0; i<n; i++){
            mp[f[i]] += p[i];
        }
        int ans = INT_MAX;
        for(auto m: mp){
            ans = min(ans, m.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}