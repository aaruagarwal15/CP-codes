#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a + n); 
  
    
        int res = 0; 
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && a[i] == a[i + 1]) 
                i++; 
    
            res++; 
        } 
        cout<<res<<endl;
    }
}