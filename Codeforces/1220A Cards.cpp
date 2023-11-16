#include<iostream>
using namespace std;
int main(){

 int a,n,b,i,c1=0,c2=0;
 char str[100000];
 cin>>n;
 cin>>str;

 for(i=0;i<n;i++){
   if(str[i]=='n') c1++;
   else if (str[i]=='z') c2++;
 }

 for(i=0;i<c1;i++){
    cout<<"1 ";
 }
for(i=0;i<c2;i++){
    cout<<"0 ";
 }

return 0;
}
