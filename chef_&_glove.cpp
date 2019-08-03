#include <iostream>
using namespace std;
#define ll long long
int main() 
{
    int T;
    cin>>T;
    ll n;
    
    while(T--)
    {  
        ll cnt1=0,cnt2=0;
        cin>>n;
        ll fin[n],glo[n];
        for(ll j=0;j<n;j++)
            cin>>fin[j];
        for(ll k=0;k<n;k++)
            cin>>glo[k];
        for(ll j=0;j<n;j++)
            if(fin[j]<=glo[j])
                cnt1++;
              
        for(ll k=0;k<n;k++)
            if(fin[k]<=glo[n-1-k])
                cnt2++;
              //else break; 
        if(cnt1==n && cnt2==n)
            cout<<"\nboth";
        else if(cnt1==n && cnt2!=n)
                cout<<"\nfront";
            else if(cnt2==n && cnt1!=n)
                    cout<<"\nback";
                else if(cnt1!=n && cnt2!=n)
                        cout<<"\nnone";
    }
    return 0;
}