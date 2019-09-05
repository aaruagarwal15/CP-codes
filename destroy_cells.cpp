#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<n*m<<" ";
        for(int k=1;k<n*m;k++){
            int total = 2 * (((n*m)/(k+1)) + (((n*m)%(k+1))!=0));
            for(int x = 0; x< n*m; x = x+(k+1)){
                int a = x%n;
                int b = x/n;
                if((a*m + b)%(k+1)==0){
                    total--;
                }
            }
            cout<<total<<" ";
        }
       cout<<endl;
    }
    return 0; 
}