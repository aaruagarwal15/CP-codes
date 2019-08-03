#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        ll len = s.length();
        ll spcl = 0;
        //cout<<len;
        for(ll i=0; i<len; i++){
            //cout<<"INSIDE I LOOP"<<endl;
            for(ll j=i+1; j<len; j++){
              //  cout<<"INSIDE J LOOP"<<endl;
                ll cnt1 = 0, cnt0 = 0;
                for(ll k = i; k< j+1; k++)
                {
                //    cout<<"INSIDE K LOOP"<<endl;
                    if(s[k] == '1'){
                        cnt1++;
                    }
                    if(s[k] == '0'){
                        cnt0++;
                    }
                }
               // cout<<"1: "<<cnt1<<endl;
                //cout<<"0: "<<cnt0<<endl;
                if(cnt0 == cnt1*cnt1){
                    //cout<<"INSIDE SPCL CNT"<<endl;
                    spcl++;
                }
            }
        }
        cout<<spcl<<endl;
    }
    return 0;

}