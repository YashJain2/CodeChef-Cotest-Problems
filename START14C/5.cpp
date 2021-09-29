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
            long long int x,y,z;
            cin>>x>>y>>z;
            if(z*2+x>=y){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }