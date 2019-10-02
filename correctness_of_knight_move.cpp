#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        cout<<"String: "<<s<<endl;
        if((s[0] >= 'a' && s[0] <= 'h') && (s[1] >= '1' && s[1] <= '8') && (s[2] == '-') && (s[3] >= 'a' && s[3] <= 'h') && (s[4] >= '1' && s[4] <= '8') && (s[5] == '\0')){
            int x = abs((s[0] - 'a') - (s[3] - 'a'));
            int y = abs((s[1] - '1') - (s[4] - '1'));
            if((x == 2 && y == 1) || (x == 1 && y == 2)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"Error"<<endl;
        }
    }
    return 0;
}