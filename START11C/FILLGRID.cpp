#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        if(n%2==0){
            for(int i=0;i<n;i++){
                for(int i=0;i<n;i++){
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout<<-1<<" ";
                    }
                    else{
                        cout<<1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}