#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n < 4){
            cout<<"1"<<endl;
            cout<<n<<" ";
            for(int i=0; i<n; i++){
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
        else{
            int tc = n/2;
            int f = 1;
            cout<<tc<<endl;
            if(n%2!=0){
                cout<<"3"<<" ";
                cout<<"1"<<" "<<"2"<<" "<<"3";
                cout<<endl;
                f = 4;
            }
            for(int i=f; i<=n; i+=2){  
                cout<<"2";
                cout<<" "<<i<<" "<<i+1<<endl;
            }
        }
    }
}