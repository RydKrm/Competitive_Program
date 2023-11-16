#include<iostream>
using namespace std;

 int bigmode(int b,int m){
  if(b==0) return 1%m;;

  int x = bigmode(b/2,m);
  x = (x*x)%m;

  if(b%2==1) x = (x*2)%m;
   return m;
 }


int main(){
 long long int a,b,n,m,i,sum=1;
 cin>>n>>m;

  if(n>=m){
    //  b = n%m;

    cout<<m<<endl;
  }
 else {

 for(i=0;i<n;i++){
    sum = sum*2;
 }

 if(sum>m){
    cout<<m<<endl;
 }
 else {
 //a= m%sum;
 a= bigmode(sum,m);
 cout<<a<<endl;
 }
 }
return 0;
}
