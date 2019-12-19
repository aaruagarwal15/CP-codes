#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int sum = a+b+c+d;
        if(sum == 0 || a==0 || b==0 || c==0 || d==0)
        {
            cout<<"Yes"<<endl;
        }
        else if((a+b) == 0 || (a+c) == 0 || (a+d) == 0 || (b+c) == 0 || (c+d) == 0 || (b+d) == 0){
            cout<<"Yes"<<endl;
        }
        else if((a+b+c) == 0 || (a+b+d) == 0 || (a+c+d)==0 || (b+c+d) == 0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;
}