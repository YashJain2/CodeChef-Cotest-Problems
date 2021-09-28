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
        string s,r;
        cin>>s;
        int n=s.length();
        r.assign(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                r[i]='1';
            }
            else{
                r[i]='0';
            }
        }
        // cout<<r<<endl;
        int ans=0,x=0;
        // cout<<ans<<endl;
        while(x<n){
            if(s[x]=='0' and ans%2==0){
                ans++;
            }
            else if(r[x]=='0' && ans%2==1){
                ans++;
            }
            x++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
