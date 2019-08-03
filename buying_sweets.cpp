#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int a[n],sum = 0, flag = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        int res;
        if(sum % x == 0){
            res = sum/x;
        }
        else{
            
            int mul = x * (sum/x);
            int price = sum - mul;
            for(int i=0;i<n;i++){
                if(price >= a[i]){
                    flag = 1;
                }
            }
            if(flag == 1){
                res = -1;
            }
            else{
                res = sum/x;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}