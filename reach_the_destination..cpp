#include<iostream>
using namespace std;


int solve(int a) {
    int x=1;
    int cnt2 = 0;
    int cnt = 0;
    int res;
    while(a%5 == 0 && a>0){
        a = a/5;
        cnt++;
        cout<<"1"<<endl;
    }
    while(a%3 == 0 && a>0){
        a = a/3;
        cnt++;
        cout<<"2"<<endl;
    }
    while(a%2 == 0 && a>0){
        a = a/2;
        cnt2++;
        cout<<"3"<<endl;
    }
    cout<<"CNT: "<<cnt<<endl;
    cout<<"CNT2: "<<cnt2<<endl;
    if(a>1){
        cout<<"4"<<endl;
        res = -1;
    }
    else{
        if(cnt2 %2==0){
            cnt2 = cnt2/2;
        }
        else{
            cnt2 = (cnt2/2)+1;
        }
        cout<<"UPDATED CNT2: "<<cnt2<<endl;
        res = cnt+cnt2;
    }
    
    return res;
}
int main(){
    int a;
    cin>>a;
    int ans = solve(a);
    cout<<"ANS: "<<ans<<endl;
    return 0;
}