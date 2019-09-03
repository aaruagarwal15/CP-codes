#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+2];
        a[0] = 0;
        a[n+1] = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(k!=2)
        {
            for(int i=1; i<=n; i++){
                int x = 1;
                if(a[i] == -1){
                    a[i] = x;
                    while(a[i+1] == a[i] || a[i-1] == a[i]){
                        x = x+1;
                        if(x <= k){    
                            a[i] = x;
                        }
                        else{
                            break;
                        }                    
                    }
                }
            }
            int f = 0;
            for(int i=1; i<n; i++){
                if(a[i] == a[i+1]){
                    f = 1;
                    break;
                
                }
            }
            if(f == 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                for(int i=1; i<=n; i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            int first[n], second[n];
            int firstValid = 1, secondValid = 1;
            int flag =1;
            for(int i=0;i<n;i++)
            {
                if(a[i+1]==-1)
                {
                    if(firstValid)
                        first[i] = (i)%2 + 1;
                    if(secondValid)
                        second[i] = (i+1)%2 + 1;
                }
                else
                {
                    if(a[i+1]==1 && i %2 ==0 )
                    {
                        secondValid =0;
                        first[i] = 1;
                    }
                    else if(a[i+1]==1 && i %2 !=0 )
                    {
                        firstValid =0;
                        second[i] = 1;
                    }
                    else if(a[i+1]==2 && i %2 ==0 )
                    {
                        firstValid =0;
                        second[i] = 2;
                    }
                    else if(a[i+1]==2 && i %2 !=0 )
                    {
                        secondValid =0;
                        first[i] = 2;
                    }
                }
                if(secondValid == 0 && firstValid ==0)
                {
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                if(firstValid==1)
                {
                    cout<<"YES"<<endl;
                    for(int i=0;i<n;i++)
                        cout<<first[i]<<" ";
                    cout<<"\n";
                }
                else
                {
                    cout<<"YES"<<endl;
                    for(int i=0;i<n;i++)
                        cout<<second[i]<<" ";
                    cout<<"\n";
                }
            }
        }
    }
    return 0;
}