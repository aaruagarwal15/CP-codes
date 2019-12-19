#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n][m+1], b[n][m+1];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>b[i][j];
            }
        }
        int dr, dc;
        int ans = n*m;
        for(dr= -25; dr<=25; dr++){
            //cout<<"DR LOOP: "<<dr<<endl;
            for(dc = -25; dc<=25; dc++){
                int cnt = 0;
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        char val;
                        if((i+dr) > (n-1) || (i+dr) < 0|| (j+dc) > (m-1) || (j+dc) < 0){
                            val = '0';
                        } 
                        else val = b[i+dr][j+dc];
                        if((a[i][j]-'0') != (val - '0')){
                            cnt++;
                            //cout<<"MIDCNT"<<endl;
                        }
                    }
                }
                ans = min(ans, cnt);
                //cout<<"CNT: "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} 