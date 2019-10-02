#include<bits/stdc++.h>
#define endl '\n'
#define ll unsigned long long int 
using namespace std;

ll binomialCoeff(ll n, ll k) 
{ 
	ll C[k+1]; 
	memset(C, 0, sizeof(C)); 

	C[0] = 1; // nC0 is 1 

	for (ll i = 1; i <= n; i++) 
	{ 
		for (ll j = min(i, k); j > 0; j--) 
			C[j] = C[j] + C[j-1]; 
	} 
	return C[k]; 
} 

  
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        ll occ_cnt=INT_MIN;
        ll cnt = 0;
        cin>>n>>k;
        ll a[n];
        ll occurence[101]={0};
        for(ll i=0;i<n;i++){
            cin>>a[i];
            occurence[a[i]]++;
            if(occ_cnt < a[i])
                occ_cnt = a[i];
        }
        //sort(a, a+n);
        ll occ_sum = 0;
        for(int i=0; i<occ_cnt; i++){
            if(occ_sum < k){
                occ_sum += occurence[i];
            }
            if(occ_sum == k){
                cnt = 1;
                break;
            }
            else if(occ_sum > k){
                ll temp_occ = k - (occ_sum - occurence[i]);
                cnt  = binomialCoeff(occurence[i],temp_occ);
                break;
            }
        }
        
        cout<<cnt<<endl;
        cnt = 0;
    }
    return 0; 
}