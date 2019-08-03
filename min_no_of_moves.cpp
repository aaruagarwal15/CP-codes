#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int w[n], sum = 0, min = INT_MAX ;
        for(int i=0;i<n;i++){
            cin>>w[i];
            sum += w[i];
            if(min > w[i]){
                min = w[i];
            }
        }
        
        cout<<sum-(n*min)<<endl;
    }
    return 0;
}