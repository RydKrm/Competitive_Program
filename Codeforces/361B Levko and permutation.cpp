#include<iostream>
using namespace std;
int main(){
 int n,k,a,i;
 cin>>n>>k;
 if(n==k){
 cout<<"-1";
 return 0;
 } else {
   a = n-k;
   cout<<a<<" ";
   for(i=1;i<a;i++) cout<<i<<" ";
   for(i=a+1;i<=n;i++) cout<<i<<" ";
 }
return 0;
}
