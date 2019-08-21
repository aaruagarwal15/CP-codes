#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
         int L[n];
        for(int i=0;i<n;i++){
            cin>>L[i];
        }
        sort(L, L+n);
        int cnt = 0;
        for(int i=n-1; i>=2; i--){
            int j=0;
            int k = i-1;
            while(j < k){
                if(L[j] + L[k] < L[i]){
                    cnt += (k-j);
                    j++;
                }
                else k--;
            }
        }
        cout<<cnt<<endl;
        cin>>n;
    }
    return 0;
}