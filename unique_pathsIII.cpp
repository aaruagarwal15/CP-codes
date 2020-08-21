#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;


void paths(vector<vector<int> >&A, vector<vector<bool> >&visited, int &res, int index, int count, int a, int b, int n, int m) { 
    visited[a][b] = 1; 
    if (A[a][b] == 0) index++;
    if (A[a][b] == 2) { 
        if (index == count) res++;
        visited[a][b] = 0; 
        return; 
    } 
    if(a >= 1 && !visited[a - 1][b] && A[a - 1][b] != -1) 
        paths(A, visited, res, index, count, a-1, b, n, m); 

    if(b >= 1 && !visited[a][b - 1] && A[a][b - 1] != -1) 
        paths(A, visited, res, index, count, a, b-1, n, m); 

    if(a < n - 1 && !visited[a + 1][b] && A[a + 1][b] != -1) 
        paths(A, visited, res, index, count, a+1, b, n, m); 

    if(b < m - 1 && !visited[a][b + 1] && A[a][b + 1] != -1) 
        paths(A, visited, res, index, count, a, b+1, n, m); 

    visited[a][b] = 0; 
} 
int solve(vector<vector<int> > &A){
    int count = 0;
    int n = A.size();
    int m = A[0].size();  
    vector<vector<bool> > visited(n, vector<bool>(m, 0)); 
    int res = 0;  
    int a, b; 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){  
            if(A[i][j] == 0) count++; 
            else if (A[i][j] == 1) { 
                a = i;
                b = j; 
            } 
        } 
    } 
    paths(A, visited, res, 0, count, a, b, n, m); 
    return res; 
}
int main(){
    vector<vector<int> > A{ { 1, 0, 0, 0 }, 
                               { 0, 0, 0, 0 }, 
                               { 0, 0, 2, -1 } };
   
  
    int ans = solve(A);
    cout<<ans<<endl;
    return 0;
}