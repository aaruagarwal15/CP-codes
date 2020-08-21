#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int p,h;
        cin>>h>>p;
        while(h > 0 && p > 0){
            h = h-p;
            p = p/2;
        }
        if(h > 0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}