#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        long long sum = 0, sum1 = 0, flag=0, pos;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum = sum+a[i];
        }
        sum1 = sum;
        long long smallest = INT_MAX; 
        float avg = (sum*1.0)/n;
       // cout<<"AVG: "<<avg<<endl;
        for(long long i=0;i<n;i++){
            sum = sum1 - a[i];
            float avgtemp = (sum*1.0)/(n-1);
            //cout<<"AVG TEMP: "<<avgtemp<<endl;
            if(avgtemp == avg){
                //cout<<"EQUAL"<<endl;
                flag = 1;
                if(a[i] < smallest){
                    //cout<<"SMALL"<<endl;
                    smallest = a[i];
                    pos = i;
                }
            }
        }
        if(flag == 0){
            cout<<"Impossible"<<endl;
        }
        else if(flag == 1){
            cout<<pos+1<<endl;
        }

    }
    return 0;
}