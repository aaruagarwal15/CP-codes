#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    if(a%3 == 0){
        cout<<"yes"<<endl;
    }
    else if(a%3 == 1 && a%2 == 1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}