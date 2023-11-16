#include<iostream>
#include<string>
using namespace std;
int main(){
 int i,j,a=-1,cnt=0,p;
 string str,str2="hello";
 cin>>str;

 for(i=0;i<str2.size();i++){
   for(j=0;j<str.size();j++){
     if(str2[i]==str[j]&&j>a){
      cnt++;
      a = j;
      str[j] = '5';
      break;
     }
   }
 }

  if(cnt==5) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
return 0;
}
