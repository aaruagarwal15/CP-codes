#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>n>>a>>b;
        int ar[n];
        int cnta = 0, cntb = 0, cntab = 0, cntabn = 0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%a == 0 && ar[i]%b != 0) cnta++;
            if(ar[i]%b == 0 && ar[i]%a != 0) cntb++;
            if(ar[i]%a == 0 && ar[i]%b == 0) cntab++;
            /*if(ar[i]%a != 0 && ar[i]%b != 0) cntabn++; */

        }
        if(cnta > cntb) cout<<"BOB"<<endl;
        else if(cntb > cnta) cout<<"ALICE"<<endl;
        else if(cnta == cntb){
            if(cntab == 0) cout<<"ALICE"<<endl; 
            else cout<<"BOB"<<endl;
        }
    }
    return 0;
}