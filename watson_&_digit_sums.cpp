#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        ll x = d/9;
        int y = d - (9*x);
        cout<<y+1<<endl;
        
    }
}