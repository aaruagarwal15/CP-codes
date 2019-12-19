#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b;
    cin>>t;
    while(t--){
        cin>>n;
       int s[12] = {0};
        for(int i=0; i<n; i++){
            cin>>a>>b;
            if(a < 9){
                s[a] = max(s[a], b);
            }
        }
        int score = 0;
        for(int i=0; i<12; i++){
            score += s[i];
        }
        cout<<score<<endl;
    }
    return 0;
}