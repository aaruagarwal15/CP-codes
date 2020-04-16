#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int f=0;
        if(k > x || x < 2){
            f = 0;
        }
        else{
            int cnt = k;
            int x1 = x;
            int a = 2;
            while(a <= ceil(sqrt(x1)) && cnt > 1){
                if(x % a == 0){
                    x = x/a;
                    //cout<<"A : "<<a<<endl;
                    cnt--;
                }
                else{
                    a++;
                }
            }
            if(cnt!=1 && x == 1){
                f = 0;
            }
            else if(x!= 1){
                f = 1;
            }
        }
        cout<<f<<endl;
    }

}