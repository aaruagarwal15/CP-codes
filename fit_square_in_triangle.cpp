#include<iostream>
using namespace std;
int main(){
    int t, b;
    cin>>t;
    while(t--){
        int cnt = 0;
        cin>>b;
        int num = (b/2)-1;
        cout<<"NUM: "<<num<<endl;
        if(num > 0){
            for(int i=num; i>0; i--){
                cnt += i;
                cout<<cnt<<" "<<endl;
            }
        }
        cout<<"Count: "<<cnt<<endl;
    }
    return 0;
}
