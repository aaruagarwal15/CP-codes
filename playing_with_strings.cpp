#include<iostream>
using namespace std;
int main(){
    int t,n;
    string s,r;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        cin>>r;
        int sum1 = 0, sum2 = 0;
        //cout<<n<<" "<<s<<" "<<r;
        for(int i=0; i<n; i++){
            sum1 += s[i];
            sum2 += r[i];
        }
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}