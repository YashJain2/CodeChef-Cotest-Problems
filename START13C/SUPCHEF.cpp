#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int m,n,k;cin>>m>>n>>k;
        n=n*k;
        if(m>n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
