
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
long int t,n,k,x,temp,temp1,a[1000000];

int main (){
    cin>>t;
    while(t--){
        cin>>n>>k;
        x=k;
        if((n-k)==1){
            cout<<-1<<endl;
        }
        else{
            temp=0;
            while(k--){
                a[temp]=temp+1;
                temp+=1;
            }
            temp1=n;
            // cout<<endl<<n<<endl;
            for(int i=x;i<n;i++){
                a[i]=temp1;
                temp1--;
            }
            // cout<<endl<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}