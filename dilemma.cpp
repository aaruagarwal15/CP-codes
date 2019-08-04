#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int flag = 0;
        int i = 0, iter = 0;
        while(i<n){
            /* if( (s[i] == '0' || s[i] == '1')&& iter >= i){
                iter = i;
            } */
            if(s[i] == '1'){
                
                //cout<<"FLAG 1"<<endl;
                if(s[i+1] == '0'){
                    s[i+1] = '1';
                }
                else if(s[i+1] == '1'){
                    s[i+1] = '0';
                }

                if(s[i-1] == '0'){
                    s[i-1] = '1';
                }
                else if(s[i-1] == '1'){
                    s[i-1] = '0';
                }
                s[i] = ' ';
                if(i == 0){
                    i=i+1;
                }
                else{
                    i=i-1;
                }
                /* i=iter;
                iter = 0; */
                continue;
            }
            else{
                //cout<<"FLAG 2"<<endl;
                i++;
            }
        }
        //cout<<"STRING: "<<s<<endl;
        for(int j=0;j<n;j++){
            if(s[j] != ' '){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
    }
    return 0;
}