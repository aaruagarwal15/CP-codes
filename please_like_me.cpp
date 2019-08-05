#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll L, d,s,c;
        cin>>L>>d>>s>>c;
        int flag =0;
        for(ll i=0;i<d;i++){
            if(s >=L){
                flag = 1;
                break;
            }
            else{
                s = s+s*c;
            }
        }
        if(flag == 1){
            cout<<"ALIVE AND KICKING"<<endl;
        }
        else{
            cout<<"DEAD AND ROTTING"<<endl;
        }
    }
    return 0;
}