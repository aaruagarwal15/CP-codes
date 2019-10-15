#include <bits/stdc++.h>
#include <vector>

#define ll long long int
#define endl '\n'

using namespace std;

int main()
{
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll ar[n],ar2[n],ar3[n], fin[n];
        for(ll i=0;i<n;i++)
            cin>>ar[i];
        for(ll i=0;i<n/2;i++)
            ar2[i] = ar[i]^ar[n-i-1];
        for(ll i=n/2;i<n;i++)
            ar2[i] = ar[n-i-1];
        if(n%2!=0)
            ar2[n/2] = 0;
        for(ll i=0;i<n/2;i++)
            ar3[i] = ar[n-i-1];
        for(ll i =n/2;i<n;i++)
            ar3[i] = ar2[n-i-1];
        if(n%2!=0 && k>n/2)
            ar[n/2] = 0;
        k;
        ll div = (k/n)%3;
        ll rem = k%n;
        if(div == 0)
        {
            for(ll i=0;i<rem;i++)
                fin[i] = ar2[i];
            for(ll i=rem;i<n;i++)
                fin[i] = ar[i];
        }
        else if(div == 1)
        {
            for(ll i=0;i<rem;i++)
                fin[i] = ar3[i];
            for(ll i=rem;i<n;i++)
                fin[i] = ar2[i];
        }
        else if(div == 2)
        {
            for(ll i=0;i<rem;i++)
                fin[i] = ar[i];
            for(ll i=rem;i<n;i++)
                fin[i] = ar3[i];
        }
        for(ll i=0;i<n;i++)
            cout<<fin[i]<<" ";
        cout<<"\n";
    }
    return 0;
}