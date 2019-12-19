#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s, b;
        cin>>s;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            cin>>b;
            if(b[0] == '0'){
                cnt1 += count(b.begin(), b.end(), '0');
            }
            else{
                cnt2 += count(b.begin(), b.end(), '1');
            }

        }
        if(cnt1 > cnt2) cout<<"Dee"<<endl;
        else if(cnt2 > cnt1) cout<<"Dum"<<endl;
        else{
            if(s == "Dee") cout<<"Dum"<<endl;
            else cout<<"Dee"<<endl;
        }
        
    }
    return 0;
}