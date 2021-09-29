#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

long long int gcd(long long int a, long long int b){
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}

int main (){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int hcf=a[0];
        for(int i=1;i<n;i++){
            hcf=gcd(hcf,a[i]);
        }
        // cout<<hcf<<endl;
        if(hcf%2!=0){
            cout<<0<<endl;
        }
        else {
            int temp=hcf/2;
            a[1]=a[1]/hcf;
            while(a[1]%2==0){
                a[1]/=2;
                temp++;
            }
            cout<<temp<<endl;
        }
    }
    return 0;
}