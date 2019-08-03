#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string num;
        cin>>num;
        //cout<<"NUM: "<<num<<endl;
        int sum = 0;
        int len = num.length();
        //cout<<"LENGTH: "<<len<<endl;
        for(int i=0;i<len; i++){
            sum +=num[i]-'0';
        }
        //cout<<"SUM: "<<sum<<endl;
        if(sum == len-1 || sum == 1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}