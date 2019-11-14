#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int m,n;
    while(t--){
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<pair<int, int> > arr;
        vector <int> diff;
        for (int i=0; i<n; i++) 
            arr.push_back( make_pair(a[i],i%m));
        sort(arr.begin(), arr.end());
        for(int i=0; i<(n-1) ; i++){
            if(arr[i].second == arr[i+1].second)
                diff.push_back(INT_MAX);
            else
                diff.push_back(arr[i+1].first - arr[i].first);
        } 
        int small = INT_MAX;
        for(int i=0; i<diff.size(); i++){
            if(diff[i] < small){
                small = diff[i];
            }
        }
        cout<<small<<endl;

    }
    return 0;
}