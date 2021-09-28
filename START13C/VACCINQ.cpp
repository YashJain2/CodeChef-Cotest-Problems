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
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int time=0;
        for(int i=0;i<p;i++){
            if(a[i]==1){
                time+=y;
            }
            else{
                time+=x;
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
