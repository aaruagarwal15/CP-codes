#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int protein = 0, pos = -1;
        for(int i=0 ;i<n; i++){
            protein += a[i];
            if(protein >= k){
                protein -= k;
            }
            else{
                pos = i;
                break;
            }
        }
        if(pos == -1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<" "<<pos+1<<endl;
        }
    }
    return 0;
}