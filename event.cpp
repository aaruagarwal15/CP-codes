#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,e;
        int l,r;
        int pos, pose;
        cin>>s>>e>>l>>r;
        //cout<<s<<" "<<e<<" "<<l<<" "<<r;
        string days[7]={"saturday","sunday", "monday", "tuesday", "wednesday","thursday","friday"};
        for(int i=0; i<7; i++){            
            string day = days[i];
            int x = s.compare(day);
            int y = e.compare(day);
            if(x == 0){
                pos = i;
                //cout<<"POS START: "<<pos<<endl;
            }
            if(y == 0){
                pose = i;
                //cout<<"POSE END: "<<pose<<endl;
            }
        }
        int cnt = 0, res = -1;
        int val = (pose - pos +1)%7;
        for(int i=0;i<100; i++){
            if(val >= l && val <=r ){
                ++cnt;
                res = val;
            }
            val += 7;
        } 
        if(cnt > 1){
            cout<<"many"<<endl;
        }
        else if(cnt ==0){
            cout<<"impossible"<<endl;
        }
        else{
            cout<<res<<endl;
        }
    }
    return 0;
}