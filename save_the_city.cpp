#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[26] = {0};
        int max = INT_MIN;
        for(int i=0; i<s.length(); i++)
        {   
            int x = s[i] - 'a';
            a[x] = a[x] + 1;
            if(a[x] > max){
                max = a[x];
                
            }
        }
        char c = 'z';
        for(int j=0; j<26; j++){
            if(a[j] == max){
                char c1 = 97+j ;
                if(c1 < c){
                    c = c1;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}