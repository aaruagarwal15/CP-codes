#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int s = -1, min1=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n], c[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                cout<<"YES"<<endl;
                s = max(b[i], c[i]);
            }
            else if(a[i] == 2){
                min1 = min(b[i], c[i]);
                if(min1 < s){
                    cout<<"YES"<<endl;
                    s = max(b[i], c[i]);
                }
                else{
                    if(b[i] == c[i] && s >= 0)
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            }
                
            
        }
        
    }
    return 0;
}