#include<bits/stdc++.h>
using namespace std;
vector<int> solve(string A, vector<vector<int> > &B) {
    //int X[100000][100000];
     vector<int> ans(B.size(), 1);
    
    for(int i=0; i<B.size(); i++){
        int x = B[i][0];
        int y = B[i][1];
        int cnt[26];
        for(int j=0;j<26;j++)
        {
            cnt[j] = 0;
        }
        for(int j = x; j<=y; j++){
            int m = A[j-1] - 'a';
            cnt[m]++;
        }
        cout<<"COUNT: ";
        for(int j=0;j<26;j++)
        {
           cout<<cnt[j]<<" ";
        }
        cout<<endl;
        int small = INT_MIN;
        for(int k=0; k<26;k++){
            if(cnt[k] > small){
                small = cnt[k];
            }
        }
        int z=0;
        for(int k=0; k<26;k++){
            if(cnt[k] == small){
                ans[z]++;
                z++;
            }
        }
        
        
    }
    return ans;
    
}


int main(){
    string a;
    vector<int> res;
    vector<vector<int> > b{ {1,3},{5,6},{6,8},{6,7},{2,3},{6,8},{4,8},{4,7} };
    res = solve(a, b);
    for(int k=0;i<res.size(); k++){
        cout<<res[k]<<" ";
    }
}