#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	#define int long long 
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    int l=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        m-=a[i];
	        if(m>0)l++;
	        if(m<=0)
	        {
	            l++;
	            break;
	        }
	    }
	    if(m>0)cout<<-1<<"\n";
	    else cout<<l<<"\n";
	}
	return 0;
}