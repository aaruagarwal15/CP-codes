#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,ans;
        cin>>n>>k>>ans;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string op;
        cin>>op;
        for(int i=0;i<k;i++){
            for(int j=0; j<n;j++){
                if(op == "XOR")
                    ans = (ans^a[j]);
                else if(op == "AND")
                    ans = (ans & a[j]);
                else if(op == "OR")
                    ans = (ans | a[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}