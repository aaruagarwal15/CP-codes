#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(x >=0 && a[i] >=0 ){
            a[i] = (a[i]/x)*x;
        }
        else if(x < 0 && a[i] < 0){
            a[i] = (ceil(a[i]*1.0/x))*x;
        }
    }
    int sum = 0;
    for(int i=0; i<n;i++){
        sum += a[i];
    }
    cout<<sum<<endl;
}