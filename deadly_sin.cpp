#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   ll T;
	cin>>T;
	ll x,y;
	while(T--)
	{   
	    cin>>x>>y;
        cout<<__gcd(x,y)*2<<endl;
        /*
        while(x!=y && x>0 && y>0)
        {  
            if(y > x){
                y=y-x;
            }	                
            else if(x > y){
                x=x-y;   
            }
        }
        if(x==y){
            cnt=2*x;
        } 
        else if(x == 0){
            cnt = y;
        }
        else if(y == 0){
            cnt = x;
        }
	     cout<<cnt<<endl; */
	   }
	return 0;
}
