#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, w, h;
        ll largest = INT_MIN;
        ll b, p;
        cin>>n;
        cin>>b;
        int flag = 0;
        for(int i=0; i<n; i++){
            cin>>w>>h>>p;
            if(p<=b){
                flag = 1;
                ll area = w*h;
                if(area > largest){
                    largest = area;
                }
            }
        }
        if(flag == 0){
            cout<<"no tablet"<<endl;
        }
        else if(flag == 1){
            cout<<largest<<endl;
        }
    }
    return 0;
}