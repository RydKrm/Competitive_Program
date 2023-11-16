#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

 int a,b,n,i,sum=0,ary[100];

 cin>>n;
 for(i=0;i<n-1;i++){
    cin>>ary[i];
 }

 //for(i=0;i<n-1;i++){
  //  cout<< "ary = "<<ary[i]<<endl;
// }

 cin>>a>>b;

 sum=0;
 for(i=a-1;i<b-1;i++){
    sum=sum + ary[i];
 }

 cout<<sum<<endl;
return 0;
}
