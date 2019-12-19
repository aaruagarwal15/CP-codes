#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void swap(int a[100000], int a1, int b1){
    int temp;
    temp = a[a1];
    a[a1] = a[b1];
    a[b1] = temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100000];
        for(int i=0; i<100000; i++){
            a[i] = (i+1);
        }
        if(n%2 == 0){
            for(int i=0;i<n;i+=2){
                swap(a,i,i+1);
            }
        }
        else{
            if(n > 3){
                for(int i=0;i<(n-3);i+=2){
                    swap(a,i,i+1);
                }
            }            
            swap(a,n-1,n-2);
            swap(a,n-1,n-3);
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;       
    }
    return 0;
}