#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n+1];
        a[0] = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        long long int ans[n+1];
        ans[0] = 0;
        ans[1] = a[1];
        for(int i=2;i<=n;i++){
            long long int x = ans[i-1]+ (a[i]*i);
            long long int y = ans[i-2] + (i*a[i-1]) + (i-1)*a[i];
            ans[i] = max(x,y);
        }
        cout<<ans[n]<<endl;
    }
    return 0;
}