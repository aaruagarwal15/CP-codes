#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,c1,c2,c3;
        cin>>a1>>a2>>a3>>c1>>c2>>c3;
        int flag = 0;
        if((a1 < a2 && c1 < c2) || (a1 > a2 && c1 > c2) || (a1 == a2 && c1 == c2)){
            flag += 1;
        }
        if((a1 < a3 && c1 < c3) || (a1 > a3 && c1 > c3) || (a1 == a3 && c1 == c3)){
            flag += 1;
        }
        if((a2 < a3 && c2 < c3) || (a2 > a3 && c2 > c3) || (a2 == a3 && c2 == c3)){
            flag += 1;
        }
        if(flag == 3){
            cout<<"FAIR"<<endl;
        }
        else{
            cout<<"NOT FAIR"<<endl;
        }

    }
    return 0;

}