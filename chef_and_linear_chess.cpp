#include<bits/stdc++.h>
//#define ll long long int
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        long long int pos, min1 = INT_MAX, ans = -1;
        for(int i=0; i<n; i++){
            cin>>pos;
            int y = k/pos;
            if( pos <=k && k%pos == 0){
                if(y < min1){
                    min1 = y;
                    ans = pos;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}