#include<iostream>
using namespace std;
int main(){

 int m,n,p;
 cin>>n>>m;

 if(m>=n){
    p=n;
 } else {
    p=m;
 }

 if(p%2==0){
    cout<<"Malvika"<<endl;
 }
 else {
    cout<<"Akshat"<<endl;
 }

return 0;
}
