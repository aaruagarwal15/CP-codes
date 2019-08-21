#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<int> initializeDiffArray(vector<int>& A) 
{ 
    int n = A.size(); 
    vector<int> D(n + 1); 
  
    D[0] = A[0], D[n] = 0; 
    for (int i = 1; i < n; i++) 
        D[i] = A[i] - A[i - 1]; 
    return D; 
} 
void update(vector<int>& D, int l, int r, int x) 
{ 
    D[l] += x; 
    D[r + 1] -= x; 
} 
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c[n], h[n];
        for(int i=1; i<=n;i++){
            cin>>c[i];
        }
        for(int i=1; i<=n;i++){
            cin>>h[i];
        }
        vector<int> A(n,0);
        vector<int> D = initializeDiffArray(A); 
        //int ans[n+1]={0};
        for(int i=1;i<=n;i++){
            int x = i-c[i];
            int y = i+c[i];
            if(x < 1) x=1;
            if(y > n) y=n;
            update(D, x-1, y-1, 1);
        }
        for (int i = 0; i < A.size(); i++) { 
            if (i == 0) 
                A[i] = D[i];  
            else
                A[i] = D[i] + A[i - 1]; 
        }  
        sort(A.begin(), A.end());
        sort(h+1, h+n+1);
        int flag = 0;
        for(int k=1; k<=n; k++){
            if(A[k-1] != h[k]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else if(flag == 0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}