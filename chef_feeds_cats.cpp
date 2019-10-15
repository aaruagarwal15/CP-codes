#include<bits/stdc++.h>
#include<vector>
using namespace std;
int countFreq(int arr[], int n, int m) 
{ 
    map<int, int> mp; 
    for (int i = n; i < m; i++){
        //cout<<arr[i]<<" ";
        if(arr[i] != 0)
            mp[arr[i]]++; 
    }
    //cout<<endl;
    map<int, int>::iterator itr; 
    for (itr = mp.begin(); itr != mp.end(); ++itr){
        if(itr->second > 1){
            return 0;
        } 
    }
    return 1;   
} 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[10000];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int x;
        if(m%n != 0){
            x = n - (m%n);
            for(int i=m; i< (m+x) ; i++){
                a[i] = 0;
            }
            m = m+x;
        }
        int i = 0;
        int res, flag = 0;
        while(i<m){
            res = countFreq(a, i, i+n);
            if(res == 0){
                cout<<"NO"<<endl;
                break;
            }
            else{
                flag += 1;
            }
            i = i+n;
        }
        
        if(flag == ceil((m*1.0)/n)){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}