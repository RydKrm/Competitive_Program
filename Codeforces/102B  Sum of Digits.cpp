#include<iostream>
using namespace std;
int main(){

 long long int n,ct=0,sum=0;
 cin>>n;
 if(n>=0&&n<10) {
    cout<<"0"<<endl;
    return 0;
 }
 while(1){
     sum=0;
    while(n>0){
        sum+=n%10;
        n = n/10;
    }
      ct++;
    n = sum; //cout<<"sum = "<<sum<<endl;
    if(n-9<=0)
        break;
 }
cout<<ct<<endl;
return 0;
}
