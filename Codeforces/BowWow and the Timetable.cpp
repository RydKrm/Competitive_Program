#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;
int main(){

 long long int p,m=0,n=0,sum=0,s=0,ct=0,a,i;
 char str[1000];

 cin>>str;
   a = strlen(str);
// limit = pow(p+1);
 for(i=a-1;i>0;i--){
    p = pow(2,m);
    p = p*str[i];
    sum+=p;
    m++;

 }

while(sum>0){
   s = pow(4,n);
   n++;
   sum -= s;
   ct++;
}

 cout<<ct<<endl;

return 0;
}
