#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int cnt =0;
        int x[150] = {0};
        for(int i=0;i<a.length(); i++){
            x[a[i]]++;
        }
        for(int i=0; i<b.length(); i++){
            if(x[b[i]] > 0){
                x[b[i]]--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}