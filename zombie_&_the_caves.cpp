#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c[n], h[n];
        for(int i=1; i<=n;i++){
            cin>>c[i];
        }
        for(int i=1; i<=n;i++){
            cin>>h[i];
        }
        int ans[n+1]={0};
        for(int i=1;i<=n;i++){
            int x = i-c[i];
            int y = i+c[i];
            if(x < 1) x = 1;
            if(y > n) y = n;
            for(int j=x; j<=y;j++){
                ans[j] += 1;
            }
        }
        sort(ans+1, ans+n+1);
        sort(h+1, h+n+1);
        int flag = 0;
        for(int k=1; k<=n; k++){
            if(ans[k] != h[k]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else if(flag == 0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}