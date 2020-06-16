#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll ts;
        cin>>ts;
        ll tsx = ts;
        //cout<<"TS "<<ts<<endl;
        ll ans;
        if(ts%2 != 0){
            ans = ts/2;
            cout<<ans<<endl;
        }
        else{
            double p = (double)log(ts)/log(2);
            int q = p;
            //cout<<"doub "<<p<<endl;
            //cout<<"int "<< q<<endl;
            if(p == q){
                ans = 0;
                cout<<ans<<endl;
            }
            else{
                int cnt = 0;
                //int x = log(ts)/log(2);
                while(ts%(ll)2 == 0){
                    cnt += 1;
                    ts = ts/(ll)2;
                }
                //cout<<"CNT: "<<cnt<<endl; 
                ll x = 1<<(cnt+1);
                //cout<<"X: "<<x<<endl;
                ans = (tsx/x);
                cout<<ans<<endl;

            }            
        }
        
    }
    return 0;
}