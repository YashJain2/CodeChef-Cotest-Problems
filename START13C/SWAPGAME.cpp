#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int a[n+1],b[n+1],score=0;
	    a[0]=0,b[0]=0;
	    for(long int i=1;i<=n;i++){
	       cin>>a[i];
	       score-=(i*a[i]);

	    }
	    for(long int i=1;i<=n;i++){
	       cin>>b[i];
	       score+=(i*b[i]);
	    }
	    cout<<score<<endl;
	}
	return 0;
}
