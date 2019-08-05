#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0, ans = 0;
        for(int i=0;i<s.length(); i++){
            
            if(s[i] == '<'){
                cnt += 1;
            }
            else if(s[i] == '>'){
                cnt -= 1;
            }
            if(cnt < 0)
                break;
            else if(cnt == 0)
                ans = i+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}