#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int t1,t2,n,s,temp;
        cin>>n>>s;
        temp=s;
        if(temp<=n){
            t2=temp;
        }
        else{
            while(temp!=n){
                temp--;
            }
            t2=temp;
        }
        t1=s-t2;
        int result=t2-t1;
        // cout<<t2<<"\t"<<t1<<endl;
        cout<<result<<endl;
    }
    return 0;
}
