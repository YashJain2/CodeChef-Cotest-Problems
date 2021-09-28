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
        long long int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long int total,total1;
        total=c+(y*a);
        total1=b+(x*a);
        long long int ans=0;
        ans=min(total,total1);
        ans=(p/ans);
        cout<<ans<<endl;
    }
    return 0;
}
