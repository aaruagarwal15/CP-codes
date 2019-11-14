#include <bits/stdc++.h>
#include <vector>

#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    ll  t;
    cin>>t;
    while(t--){
        ll  a,b,c;
        cin>>a>>b>>c;
        ll  sum = a + (b*2) + (c*3);
        if(sum % 2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            if(a == b && b == c && a == c){
                cout<<"YES"<<endl;
            }
            else{
                ll  s = sum/2;
                ll  flag = 0;
                ll sum2 = sum;
                while(s>0){
                    if(s >= 3 && c>0){
                        s = s-3;
                        c = c-1;
                        sum2 -= 3;
                    }
                    else if(s >= 2 && b>0){
                        s = s-2;
                        b = b-1;
                        sum2 -=2;
                    }
                    else if(s >=1 && a>0 ){
                        s = s-1;
                        a = a-1;
                        sum2 -=1;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                //ll  val = a + (b*2) + (c*3);
                if(sum2 == (sum/2)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}