#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
 int ts;
 cin>>ts;
 while(ts--){
    int n;
    cin>>n;
    if(n<7) cout<<"NO"<<endl;
    else {
        int x=1,y=2,z;
        z = n-3;
        if(z%3==0){
            z -= 2;
            y +=2;
        }
        if(y==z) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
 }


 return 0;
}
