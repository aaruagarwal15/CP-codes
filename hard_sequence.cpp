#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    int ar[130]={0};
    int res[128];
    res[0] = 0;
    for(int i=0;i<127;i++){
        if(ar[res[i]] == 0){
            if(i == 1) res[i+1] = 1;
            else res[i+1] = 0;
        }
        else{
            res[i+1] = i - ar[res[i]];           
        }
        ar[res[i]] = i;
    }
    /* for(int i=0; i<128; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl; */
    while(t--){
        cin>>n;
        int cnt = 0;
        for(int i=0; i<n ; i++){
            if(res[i] == res[n-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}