#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], cnt=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] == 1){
                cnt += 1;
            }
        }
        int b = 0;
        if(cnt == 1 || cnt == 0){
            b = 0; 
        }
        else{
            int x=0, f = 0;
            for(int i=0; i<n; i++){
                if(a[i] == 1 && f == 0){
                    x = i;
                    f = 1;
                }
                else if(a[i] == 1 && f == 1){
                    int c = i-x;
                    if(c >= 6){
                        x = i;
                        continue;
                    }
                    else{
                        b  =  1;
                        break;
                    }
                }
            }
        }
        if(b == 1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}