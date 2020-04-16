#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> last;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(last.count(s[i])){
                ans = max(ans, n-i+last[s[i]]);
            }
            last[s[i]] = i;
        }
        cout<<ans<<endl;
    }
    return 0;
}