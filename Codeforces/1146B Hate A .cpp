#include<iostream>
#include<string>
using namespace std;
int main(){
 int len,len2,i,s,cnt=0;
 string str,str2;
 cin>>str;
 str2 = str;
 len = str.size();
 for(i=0;i<len;i++){
    if(str[i]=='a'){
     str.erase(str.begin()+i);
    i--;
    }
 }

 cout<<str<<endl;
 cout<<str2<<endl;

 len2 = str.size()/2;
 for(i=0;i<len2;i++){
    if(str[i]!=str[len2+i]) {
        cout<<":("<<endl;
        return 0;
    }
 }

 if(str.size()%2==1){
    cout<<":("<<endl;
    return 0;
 }
 if(str2[len-1]=='a'){
    for(i=0;i<len-1;i++){
     if(str2[i]!='a'){
    cout<<":("<<endl;
    return 0;
     }
    }
 }

 s = len-str.size()/2;
 for(i=0;i<s;i++) cout<<str2[i];

return 0;
}
