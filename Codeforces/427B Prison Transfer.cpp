#include<iostream>
using namespace std;
int main(){
 int i,j,n,t,c,ar[199999],ct=0,p=0,a;
 cin>>n>>t>>c;
 for(i=0;i<n;i++) cin>>ar[i];
 for(i=0;i<n-c+1;i++){
      p=0;a=i;
     for(j=a;j<a+c;j++)
        if(ar[j]<=t) p++;
        if(p==c)ct++;
 }
 cout<<ct<<endl;
return 0;
}
