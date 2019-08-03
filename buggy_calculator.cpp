#include<bits/stdc++.h>
#include<string>
#include <cstdlib> 
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll sum = 0, mul=1;
        while(a>0 || b>0){
            ll rema = a%10;
            ll remb = b%10;
            ll rem = (rema + remb)%10;
            a = a/10;
            b = b/10;
            sum = sum+rem*mul;
            mul=mul*10;
        }
        cout<<sum<<endl;
    }
    return 0;
}