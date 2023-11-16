#include<iostream>
#include<string>
using namespace std;
int main(){

 int i,cnt=0,len,len2;
 string str;
 cin>>str;
 len = str.size();
 len2 = len/2;
 if(len==1){
    cout<<"YES"<<endl;
  return 0;
 }

 for(i=0;i<len2;i++){
    if(str[i] != str[(len-i)-1])
        cnt++;
 }

 if(len%2==0){
        if(cnt==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 } else {
   if(cnt<=1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 }
return 0;
}
