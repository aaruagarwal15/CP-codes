#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char ans1, ans2, ans3;
        int x = 360;
        if(x%n  == 0){
            ans1 = 'y';
        }
        else{
            ans1 = 'n';
        }
        if(n<=x){
            ans2 = 'y';
        }
        else{
            ans2 = 'n';
        }
        if(n*(n+1)/2 <=x){
            ans3 = 'y';
        }
        else{
            ans3 = 'n';
        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
}