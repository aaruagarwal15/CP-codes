#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] > a[j]){
                    cnt1++;
                }
            }
        }
        for(int k=0;k<n-1;k++){
            if(a[k] > a[k+1]){
                cnt2++;
            }
        }
        if(cnt1 == cnt2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}