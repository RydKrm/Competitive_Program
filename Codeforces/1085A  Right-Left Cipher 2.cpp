#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
 string str,str2;

 int main(){
 int i,len,n=0;
 cin>>str;
 len = str.size();
 if(len==1) cout<<str<<endl;
 else if(len%2==0){
 for(i=0;i<=len/2;i++){
    str2[n] = str[len/2+i-1];
    n++;
   if(i!=0){
     str2[n] = str[len/2-i-1];
      n++;
   }
 }
 } else {
     len++;
  for(i=0;i<=len/2;i++){
    str2[n] = str[len/2+i-1];
    n++;
   if(i!=0){
     str2[n] = str[len/2-i-1];
      n++;
   }
 }


 }


 for(i=0;i<len;i++) cout<<str2[i];

return 0;
}
