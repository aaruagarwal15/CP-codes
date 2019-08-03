#include<iostream>
using namespace std;
int solve(int a[], int n){
     //int n= A.size();
    unsigned long long int ans = 0, M = 1000000007,val=1;
    for(int i=1; i<n; i++){
        val *= 2;
        val = val%M;
    }
    for(int i=0;i<n; i++){
        ans += (((A[i]*A[i])%M)*val)%M;
        ans = ans%M;
    }
    
    return ans%M;
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = solve(a,n);
    cout<<ans;
    return 0;
    
}