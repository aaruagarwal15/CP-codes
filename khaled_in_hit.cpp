#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int freq[101]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]] += 1;
        }
        int flag = 0;
        for(int i=0; i<101; i++){
            if(freq[i] > (n/4)){
                //cout<<"1";
                flag = 1;
                break;
            }
        }
        sort(a, a+n);
        int group[n];
        int j = 0;
        for(int i=0; i<n; i++){
            
            if(i%(n/4) == 0 && i!=0) j+=1;  
            group[i] = j;          
        }
        
        /* cout<<"Group: ";
        for(int i=0; i<n; i++) {
            cout<<group[i];
        }
        cout<<endl; */
        for(int i=0; i<(n-1); i++){
            if(a[i] == a[i+1] && group[i] != group[i+1] ){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1){
            cout<<"-1"<<endl;
        }
        else if(flag == 0){
            int x = a[n/4];
            int y = a[(n/4) + (n/4)];
            int z = a[(n/4) + (n/4) + (n/4)];
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}