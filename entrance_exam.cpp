#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,e;
        ll m;
        cin>>n>>k>>e>>m;
        int a;
        ll total[n-1] = {0};
        for(int i =0; i<n-1; i++){
            for(int j=0;j<e;j++){
                cin>>a;
                total[i] += a;
                //cout<<total[i]<<" ";
            }
            //cout<<endl;
        }
        
        ll s_total = 0, s;
        for(int x = 0; x<e-1; x++){
            cin>>s;
            s_total += s; 
        }
        //cout<<"S_TOTAL: "<<s_total<<endl;
        sort(total, total+n-1);
        ll res = total[n-k-1]-s_total+1;
        if(res < 0){
            res = 0;
            cout<<res<<endl;
        }
        else if(res <= m){
            cout<<res<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }

    }
    return 0;
}