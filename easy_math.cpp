#include<bits/stdc++.h>
using namespace std;


int sum(int x)
{
    int ans=0;
    while(x!=0)
    {
        ans=ans+x%10;
        x/=10;
    }
    return ans;
}
int main()
{
    int t,i,j,k,l;
    cin>>t;
    int gun=0;
    for(i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++){
            cin>>arr[j];

        }
        int small = INT_MIN, ans;
        for(k=0;k<n;k++){
            for(l=k+1;l<n;l++){
                gun=arr[k]*arr[l];
                ans = sum(gun);
                if(ans > small){
                    small = ans;
                }
                
            }
        }
        cout<<small<<endl;
        
    }
    return 0;
}