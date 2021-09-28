#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int gcd (long long int a, long long int b){
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int main() {
	int t;	cin>>t;
	while(t--){
	    long long int a,b,hcf=0;
	    cin>>a>>b;
	    while(hcf!=1){
	        hcf=gcd(a,b);
	        a=a/hcf;
	    }
	    if(a>1)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
