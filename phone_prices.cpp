#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[110];
        for(int i=0;i<5;i++){
            a[i] = 1000;
        }
        for(int i=5; i < (n+5); i++){
            cin>>a[i];
        }
        int cnt = 0;
        for(int i=5; i<(n+5); i++){
            int cnt1 = 0;
            for(int j = i-1; j >= (i-5); j--){
                if(a[j] > a[i]) cnt1 += 1;
            }
            if(cnt1 == 5){
                cnt += 1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}