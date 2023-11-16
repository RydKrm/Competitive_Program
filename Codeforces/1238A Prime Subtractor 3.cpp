#include<iostream>
using namespace std;
//bool prime_number(int n){
// for(i=2;i<n;i++){
 //   if(n%i ==0)
 //       return false;
//   return true;
//}

int main(){

 long long int n,i,j,x,y,t,sub=0;
 cin>>t;
 for( j=0;j<t;j++){
 cin>>x>>y;

   sub = x-y;  //  cout<<"this is sub = "<<sub<<endl;
  if(sub==1){
    cout<<"NO"<<endl;
 }
 //else if(prime_number(sub)==true){
 //   cout<<"YES"<<endl;
// }
 else{
    cout<<"YES"<<endl;
 }
 }
 return 0;
}
