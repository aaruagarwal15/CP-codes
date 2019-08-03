#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        while(n>0){
            int i = sqrt(n);
            //cout<<i;
            n = n - (i*i);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

