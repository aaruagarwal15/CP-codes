#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    queue<pair<int,int> > q;
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j] == 2){
                q.push(make_pair(i,j));
            }
        }
    }
    q.push(make_pair(-1,-1));
    int ans = 0, flag, prev = 0;
    while(!q.empty()){
        flag = 0;
        while(q.front().first != -1){
            int x = q.front().first;
            int y = q.front().second;

            if(x+1 < n && a[x+1][y] == 1){
                if(!flag){
                    ans += 1;
                    flag = 1;
                    
                }
                //cout<<"CASE 1"<<endl;
                a[x+1][y] = 2;
                q.push(make_pair(x+1,y));
            }
            if(y+1 < m && a[x][y+1] == 1){
                if(!flag){
                    ans += 1;
                    flag = 1;
                }
                //cout<<"CASE 4"<<endl;
                a[x][y+1] = 2;
                q.push(make_pair(x,y+1));
            }
            if(y-1 >=0 && a[x][y-1] == 1){
                if(!flag){
                    ans += 1;
                    flag = 1;
                    
                }
                //cout<<"CASE 2"<<endl;
                a[x][y-1] = 2;
                q.push(make_pair(x,y-1));
            }
            if(x-1 >=0 && a[x-1][y] == 1){
                if(!flag){
                    ans += 1;
                    flag = 1;
                }
                //cout<<"CASE 3"<<endl;
                a[x-1][y] = 2;
                q.push(make_pair(x-1,y));
               
            }
            q.pop();
            //cout<<"I1 ends" <<endl;
        }
        q.pop();
        if(!q.empty())
            q.push(make_pair(-1,-1));
      
    }
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            if (a[i][j] == 1) {
                ans = -1;
                break;
            } 
    
    cout<<ans<<endl;
    return 0;
}

