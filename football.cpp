#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a, s[n]={0},b;
        for(int i=0;i<n;i++){
            cin>>a;
            s[i] += a*20;
        }
        for(int j=0;j<n;j++){
            cin>>b;
            s[j] = s[j] - b*10;
            if(s[j]<0){
                s[j] = 0;
            }
        }
        int large = INT_MIN;
        for(int i=0;i<n; i++){
            if(s[i] > large){
                large = s[i];
            }
        }
        cout<<large<<endl;
    }
    return 0;
}