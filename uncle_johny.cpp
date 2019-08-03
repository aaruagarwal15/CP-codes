#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], k, pos;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        cin>>k;
        int len = a[k];
        sort(a, a + n+1);
        /* cout<<"SORTED: ";
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        } 
        cout<<endl;*/
        for(int i=1;i<=n+1;i++){
            if(a[i] == len){
                pos = i;
                break;
            }
            else{
                continue;
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}