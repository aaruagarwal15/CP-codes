#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int isvalid(ll x)
{
    if(x < 0)   x *= -1ll;
    if (x % 4 == 2) return 0;
    return 1;
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1);
        for(ll i=0; i<n; i++){
             cin>>a[i];
        } 
        
        ll s = -1, e = -1, ans = 0, p = 1, i, j;
        bool start = false; 
        int end = 0, flag = 0;

        for (i = 0; i < n;){
            p = 1; s = i; e = -1;
            start= 0;
            end = 0;
            flag = 0;
            for(j = i; j < n; j++){
                p *= a[j];
                if (start == 0 && p % 4 == 0){
                    s = j;
                    flag = 1;
                    break;
                }
                else if (isvalid(p)==0 && start==0){
                    start = 1;
                    s = j;
                }
                else if (isvalid(p)==1 && start==1){
                    end = 1;
                    e = j;
                    break;
                }
            }
            if(start == 0){
                if(flag == 0)
                {
                    ll m = n - s;
                    ans += ((ll)m * (ll)(m + 1)) / 2ll;
                    break;
                }
                else{
                    ans += (n - i);
                    i++;
                }
            }
            
            else if(start == 1 && end == 0){
                ll m = s - i;
                ans += ((m * m) - (m * (m - 1)) / 2);
                i = s + 1;
            }
            else{
                ll y = (s - i);
                ll x = y + ((n - 1) - e) + 1;
                ans += (x * y - ((y - 1) * y) / 2);
                ll z = ((n - 1) - e);
                ans += (z + 1);
                i = s + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}