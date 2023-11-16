#include<iostream>
using namespace std;
int main(){

 int n,k,p=1,sum=0,ct=0,m=1;
 cin>>n>>k;
 for(int i=1;i<=k;i++){
    m*=10;
 }  cout<<"m= "<<m<<endl;
 while(1){
     p = p*10;      cout<<"p= "<<p<<endl;
     if(n%m!=0&&n%10!=0){
        n = n-n%p; cout<<"n1= "<<n<<endl;
        n = n/10;  cout<<"n2= "<<n<<endl;
        ct++;
    } else if(n%m==0){ cout<<"for testing"<<endl;
      break;
    }
 }

 cout<<ct<<endl;

return 0;
}
