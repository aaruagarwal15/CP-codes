#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+(2*b)+(3*c);
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }
        else{            
            if(a>=2){
                cout<<"YES"<<endl;
            }
            else if(a==1){
                if(b==0){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
            else{
                
                if((c==0&&b%2!=0)||(b==1)){
                    cout<<"NO"<<endl;
                }
                else {
                    cout<<"YES"<<endl;
                }
                
            }                     
        }              
    }
    return 0;
}