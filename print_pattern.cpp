#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n];
        a[0][0] = 1;
        a[n-1][n-1] = n*n;
        for(int i = 1; i<n; i++){
            a[0][i] = a[0][i-1] + i;
            a[n-1][n-i-1] = a[n-1][n-i] - i;
        }
        for(int i=1; i< n-1; i++){
            for(int j=0; j<n-i; j++){
                a[i][j] = a[i-1][j+1] + 1; 
            }
        }
        for(int i=n-2; i>0; i--){
            for(int j=n-i; j<n; j++){
                a[i][j] = a[i+1][j-1] -1;
            }
        }
        for(int m = 0; m < n; m++){
            for(int x = 0; x < n; x++){
                cout<<a[m][x]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}