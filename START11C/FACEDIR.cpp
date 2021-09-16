#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int sec;
        cin>>sec;
        //initially in north direction
        if(sec%4==1){
            cout<<"East"<<endl;
        }
        else if (sec%4==2){
            cout<<"South\n";
        }
        else if (sec%4==3){
            cout<<"West\n";
        }
        else{
            cout<<"North\n";
        }
    }
    return 0;
}