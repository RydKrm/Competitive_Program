#include<iostream>
#include<string.h>
#include<string>
#include <algorithm>
using namespace std;

int main(){

 int i,a,b,t,m,j;
 string str1,str2;

 cin>>t;
 for(i=0;i<t;i++){
        m=0;
   // cin>>str1;
    getline (cin, str1);
    b=strlen(str1);
   for(j=0;j<b;j++){
     if(str1[j] != str1[j+1]){
        str2[m]=str1[j];
        m++;
     }
     else if(str1[j] == str1[j+1]){
        j++;
     }
   }

   sort(str2.begin(),str2.end());
   cout<<str2<<endl;

  for(j=0;j<b;j++){
      str2[j]=' ';
  }
 }
return 0;
}
