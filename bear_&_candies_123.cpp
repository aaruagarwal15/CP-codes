#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int cnta = 0, cntb = 0, flag = 1;
        string ans;
        while(true){
            if(flag%2 == 1){
                cnta += flag;
                if(cnta > a){
                    ans = "Bob";
                    break;
                }
            }
            else{
                cntb += flag;
                if(cntb > b){
                    ans = "Limak";
                    break;
                }
            }
            flag++;
        }
        cout<<ans<<endl;
    }
    return 0;
}