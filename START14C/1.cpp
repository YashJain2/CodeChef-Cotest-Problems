#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main (){
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        if((x+y)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}