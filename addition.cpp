#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int convert(string x){
    int len = x.length();
    int cnt = 0;
    int val = 0;
    for(int i = len-1; i>=0; i--){
        int p = x[i] - '0';
        if(p == 1)
            val += p<<cnt;
        cnt++;
    }
    //cout<<val<<endl;
    return val;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int A = convert(a);
        int B = convert(b);
        int cnt = 0;
        while(B>0){
            int u = A^B;
            int v = A&B;
            A = u;
            B = v*2;
            cnt += 1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}