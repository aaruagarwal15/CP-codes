#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int a[n]={0};
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'x'){
                if(i-1 >= 0 && s[i-1] == 'y' && a[i-1] == 0){
                    cnt += 1;
                    a[i] = 1;
                    a[i-1] = 1;
                }
                else if(i+1 < n && s[i+1] == 'y' && a[i+1] == 0){
                    cnt += 1;
                    a[i] = 1;
                    a[i+1] = 1;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}