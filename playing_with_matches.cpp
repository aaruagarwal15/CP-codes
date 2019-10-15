#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        int cnt = 0;
        while(sum > 0){
            int x = sum % 10;
            if(x == 1) cnt += 2;
            else if(x == 2 || x == 3 || x == 5) cnt += 5;
            else if(x == 4) cnt += 4;
            else if(x == 0 || x == 6 || x == 9) cnt += 6;
            else if(x == 7) cnt += 3;
            else if(x == 8) cnt += 7;
            sum = sum/10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}