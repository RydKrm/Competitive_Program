#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 int n,i,h=0;
 cin>>n;
  for(i=0;i<=n;i++){
   if(i%2==0) h++;
   else h = h*2;
 }
 cout<<h<<endl;
}
return 0;
}
