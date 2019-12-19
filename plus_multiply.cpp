#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a;
        cin>>n;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin>>a;
            mp[a]++;
        }
        map<int, int>::iterator x;
        int pairs = 0;
        for (x=mp.begin() ; x != mp.end(); ++x){
            if(x->second > 1){
                pairs += ((x->second*(x->second -1))/2);
            }
            //cout << x->first << " " << x->second << endl; 
        }
        cout<<pairs<<endl;
    }
    return 0;
}