#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x = s.length();
    string temp = "", ans="";
    vector<string> v;
    if(isdigit(s[0])){
        temp += s[0];
    }
    for(int i=1; i<x; i++){
        if(isdigit(s[i]) && isdigit(s[i-1])){
            temp += s[i];
        }
        else if(isdigit(s[i]) && !isdigit(s[i-1]) ){
            if(temp != "") v.push_back(temp);
            temp = s[i];
        }
    }
    if(temp != ""){
        v.push_back(temp);
    }
    long long int result = 1, a=0, b=0;
    for(int i=0; i<v.size(); i++){
        a = 0;
        b = 0;  
        for (int j = 0; j < v[i].length(); j++) 
            a = (a * 10 + (v[i][j] - '0')) % 26;
        
        int n=1;
        result = 1; 
        while (n) { 
            if (n & 1) 
                result = result * a % 26; 
            n = n / 2; 
            a = a * a % 26; 
        }           
        ans += (char)((int)result+97);
    }
    cout<<ans;
    return 0;
}