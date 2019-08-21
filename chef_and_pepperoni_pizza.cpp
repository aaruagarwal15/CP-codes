#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans;
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int left[n]={0}, right[n]={0};
        int sum_left = 0, sum_right = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] == '1' && j<n/2)
                    left[i]++;
                else if(a[i][j] == '1' && j>=n/2)
                    right[i]++;
            }
            sum_left += left[i];
            sum_right += right[i];
        }
        ans = abs(sum_left - sum_right);
        for(int i=0; i<n; i++){
            int x = abs(sum_left - sum_right + 2*(right[i] - left[i]));
            if(ans > x){
                ans = x;
            }
        }
        cout<<ans<<endl;
       
    }
    return 0;
}