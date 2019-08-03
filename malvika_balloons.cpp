#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int len, t, res;
    string s;
    cin>>t;
    while(t--){
        int cnta = 0, cntb = 0;
        cin>>s;
        len = s.length();
        //cout<<"Length= "<<len<<endl;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == 'a'){
                cnta++;
            }
            if(s[i] == 'b'){
                cntb++;
            }
        }
       // cout<<"a = "<<cnta<<endl;
        //cout<<"b = "<<cntb<<endl;
        if(cnta == len || cntb == len || cnta == 0 || cntb == 0){
            res = 0;
        }
        else if(cnta > cntb){
            res = cntb;
        }
        else if(cnta <= cntb){
            res = cnta;
        }
        cout<<res<<endl;
    }
    return 0;
}
