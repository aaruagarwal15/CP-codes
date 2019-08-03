#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int j = 0;
        for(int i=n-1; i>0; i--){
            if(a[i] == a[i-1]){
                b[j] = a[i];
                j++;
                i--;
            }
        }
        if(j < 2){
            cout<<"-1"<<endl;
        }
        else{
            cout<<b[0]*b[1]<<endl;
        }

    }
    return 0;
}   