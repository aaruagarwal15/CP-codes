#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long int total = 1;
        int x = s[0] - 97;
        for(int i=1;i<s.length(); i++){
            total += 1;
            int y = s[i] - 97;
            if(x <= y) total += (y-x);
            else total += (26-x+y);
            x = y;    
        }
        if(total+1 <= 11*s.length()){
            cout<<"YES"<<endl;
        }
        else  cout<<"NO"<<endl;
    }
    return 0;
}