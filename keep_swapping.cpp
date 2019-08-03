#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
string solve(string a, string b, int c){
    int n = a.length();
    long long int b1 = 0 ;
    for(long long int i=0; i<b.length();i++){
        if(b[i] >='0' && b[i] <='9'){
            b1 = b1*10+(b[i]-'0');
        }
    }
    //isstringstream(b)>>b1;
    cout<<"B1: "<<b1<<endl;
    for(long long int i=0; i<=b1; i++){
        char temp = a[i%n];
        a[i%n] = a[(i+c)%n];
        a[(i+c)%n] = temp;
        
    }
    return a;
}
int main(){
    string a,b,ans;
    int c;
    cin>>a>>b>>c;
    ans = solve(a,b,c);
    cout<<ans;
}