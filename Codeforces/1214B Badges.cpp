#include<iostream>
using namespace std;
int main(){

 int b,g,n,i,ct=0,m=0,p,a;
 cin>>b;cin>>g;cin>>n;
 if(b>g){
    p=b;a=g;
 } else{ p=g;a=b;
 }
 int c=n;
 while(n!=0){
        if((n+m)==c) ct++;
        n--;
}
 cout<<ct<<endl;
return 0;
}
