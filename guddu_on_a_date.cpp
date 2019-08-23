#include<bits/stdc++.h>
using namespace std;
long long sum(unsigned long long N)
{
    long long s=0;
    while(N>0)
    {
        s+=N%10;
        N/=10;
    }
    return s%10;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long N;
        cin>>N;
        for(unsigned long long i=10*N;i<=10*N+9;i++)
            if(sum(i)==0)
            {
                cout<<i<<endl;
                break;
            }
    }
    return 0;
}