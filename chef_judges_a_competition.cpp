#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b, suma = 0, sumb = 0;
        int largea = INT_MIN, largeb = INT_MIN;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            suma += a;
            if(a > largea){
                largea = a;
            }
        }
        for(int i=0;i<n;i++){
            cin>>b;
            sumb += b;
            if(b > largeb){
                largeb = b;
            }
        }
        int a_score = suma - largea;
        int b_score = sumb - largeb;
        if(a_score < b_score ){
            cout<<"Alice"<<endl;
        }
        else if(b_score < a_score){
            cout<<"Bob"<<endl;
        }
        else if(a_score == b_score){
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}