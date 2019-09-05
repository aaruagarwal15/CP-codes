#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a;
        int sum = 0;
        for(int i=0;i<n; i++){
            cin>>a;
            if(a%2 == 0){
                sum += 1;
            }
        }  
        if(k == 0){
            if(sum < n){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
    
        }
        else{
            if(sum >=k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }   
        } 
    }
    return 0;
}