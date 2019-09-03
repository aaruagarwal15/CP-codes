#include <bits/stdc++.h>
using namespace std;
typedef long long intg;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        intg n,len,rem=0,ans,minm,i,anss;
        cin>>n;
        string k;
        cin>>k;
        len=k.length();
        for(i=0;i<len;i++)
            rem=(rem*10+(intg)(k[i]-48))%n;
        anss=2*rem;
        ans=min(rem,n-rem);
        ans*=2;
        if(anss==n)
            ans=max((intg)0,ans-1);
        cout<<ans<<"\n";
    }
	return 0;
}