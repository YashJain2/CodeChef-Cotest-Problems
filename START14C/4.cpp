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
        long long int n;
        cin>>n;
        int ans=n;
        ans=ans+(((n*n)-n)*2);
        cout<<ans<<endl;
    }
    return 0;
}