#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,sum;
        cin>>n>>sum;
        long long int maxSum=(n*(n+1))/2;
        long long int difference=maxSum-sum;
        
        if(maxSum<sum || sum<(maxSum-n)){
            cout<<"-1\n";
        }
        else if(difference>=1 && difference <=n){
            cout<<difference<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}
