#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        if(n%2==0)
	    {
	        a=abs(a);
	        b=abs(b);
	    }
	    if(a>b)
	        cout<<"1"<<"\n";
	   else if(b>a)
	        cout<<"2"<<"\n";
	   else
	        cout<<"0"<<"\n";
	
    }
    
    return 0;
}