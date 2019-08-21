#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,l,r,c,p,temp, flag = 0;
        cin>>n>>m>>k>>l>>r;
        int small = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>c>>p;
            temp = 1;
            while(temp <= m){
                if(c > k+1){
                    c = c-1;
                }
                else if(c < k-1){
                    c = c + 1;
                }
                else if(c >= k-1 && c <= k+1){
                    c = k;
                }
                temp = temp + 1;
            }
            //cout<<"C:"<<c<<endl;
            
            if(c >= l && c <= r){
                //cout<<"FLAG 1"<<endl;
                if(p < small){
                    small = p;
                }
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<small<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}