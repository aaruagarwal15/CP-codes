#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s[n];
        int val[200005] = {0};
        for(int i=0;i<n;i++){
            cin>>s[i];
            val[s[i]] = 1;
        }
        int x = 0;
        for(int i=0; i<200005; i++){
            if(x == k){
                break;  
            }
            if(val[i] == 0){
                val[i] = 1;
                x++;
            }
        }
        for(int i=0; i<200005; i++){
            if(val[i] == 0){
                cout<<i<<endl;
                break;
            }
        }
        
    }
    return 0;
}