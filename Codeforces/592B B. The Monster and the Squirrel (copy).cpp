#include<iostream>
using namespace std;
int main(){

 long long int n;
 cin>>n;
 if(n==3){
 cout<<"1"<<endl;
 } else if (n==4){
  cout<<"4"<<endl;
 } else {
   n=n-2;
   cout<<n*n<<endl;
 }
return 0;
}
