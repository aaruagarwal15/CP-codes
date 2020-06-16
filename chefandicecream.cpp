#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c = 0, f = 0;
        int A[n];
        map<int, int> mp;
        mp[5] = 0;
        mp[10] = 0;
        mp[15] = 0;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        if(A[0] != 5){
            f = 1;
        }
        else{
            c += A[0];
            mp[5] += 1;
            for(int i=1; i<n; i++){
                if(A[i] == 5) {
                    c += A[i];
                    mp[5] += 1;
                }
                else if((A[i]-5) <= c){
                    c += 5;
                    int x = A[i] - 5;
                    if(A[i] == 10 && mp[x] > 0){
                        mp[x]--;
                        mp[A[i]]++;
                    }
                    else if(A[i] == 15){
                        mp[A[i]]++;
                        if(mp[x] > 0){
                            mp[x]--;
                        }
                        else if(mp[5] > 1){
                            mp[5] -= 2;
                        }
                        else{
                            f = 1;
                            break;
                        }
                    }
                    else{
                        f = 1;
                        break;
                    }
                }
                else{
                    f = 1;
                    break;
                } 
            }
        }
        if(f == 1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}   