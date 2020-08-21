#include<bits/stdc++.h>
using namespace std;

void generateSubset(string str, int pos, string temp){
    int n = str.length();
    if(pos == n) return;

    cout<<"{"<<temp<<"}"<<endl;
    for(int i=pos+1; i<n; i++){
        temp += str[i];
        cout<<"POS1 : "<<i<<endl;
        cout<<"TEMP1 : "<<temp<<endl;
        generateSubset(str, i, temp);
        temp.erase(temp.size()-1);
        cout<<"TEMP2 : "<<temp<<endl;
        cout<<"POS2 : "<<i<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string temp = "";
        generateSubset(str, -1, temp);
    }
    return 0;
}