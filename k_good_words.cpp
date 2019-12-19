#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string w;
        cin>>w;
        int k;
        cin>>k;
        int occur[26]={0};
        for(int i=0; i<w.length(); i++){
            occur[w[i] - 'a'] += 1;
        }
        /* for(int i=0; i<26; i++){
            cout<<occur[i]<<" ";
        }
        cout<<endl; */
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0; i<26; i++){
            if(max < occur[i]) max = occur[i];
            if(min > occur[i] && occur[i]!=0) min = occur[i];
        }
        int cntmax = 0;
        for(int i=0; i<26; i++){
            if(occur[i] == max){
                cntmax += 1;
            }
        }
        if(abs(max-min) > k){
            cout<<cntmax*(max-min-k)<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}