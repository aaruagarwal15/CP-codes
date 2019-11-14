#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        string res = "0000000000";
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=0;j<10;j++){
                if((res[j] == '1' && a[i][j] == '1') || (res[j] == '0' && a[i][j] == '0')){
                    res[j] = '0';
                    //cout<<"FLAG 0 \n";
                }                    
                else{
                    res[j] = '1';
                    //cout<<"FLAG 1 \n";
                }                    
            }
            /* cout<<"RES: ";
            for(int i=0;i<10;i++){
                cout<<res[i];
            }
            cout<<endl; */
        }
       
        int cnt = 0;
        for(int i=0;i<10;i++){
            if(res[i] == '1'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}