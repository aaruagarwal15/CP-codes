#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mat[n][n];
        int val = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mat[i][j] = val;
                val += 1;
            }
        }
        if(n % 2 == 0){
            for(int i=0; i<n; i++){
                if(i%2 == 0){
                    for(int j=0; j<n; j += 2){
                        int temp = mat[i][j];
                        mat[i][j] = mat[i][j+1];
                        mat[i][j+1] = temp;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}