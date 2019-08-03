#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem = n%8;
        //cout<<"rem: "<<rem<<endl;
        int res = 0;
        string ans;
        if(rem == 1){
            res = (n+3);
            ans = "LB";
        }
        else if(rem == 2){
            res = (n+3);
            ans = "MB";
        }
        else if(rem == 3){
            res = (n+3);
            ans = "UB";
        }
        else if(rem == 4){
            res = (n-3);
            ans = "LB";
        }
        else if(rem == 5){
            res = (n-3);
            ans = "MB";
        }
        else if(rem == 6){
            res = (n-3);
            ans = "UB";
        }
        else if(rem == 7){
            res = (n+1);
            ans = "SU";
        }
        else if(rem == 0){
            res = (n-1);
            ans = "SL";
        }
        cout<<res<<ans<<endl;
    }
    return 0;
}