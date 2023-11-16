#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main(){

 int t;
 cin>>t;
 cin.ignore();
 for(int k=0;k<t;k++){
 char s[100];
 cin.getline(s,100);

 for(int i=0;i<strlen(s);i++){
  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'&&s[i]!=' '){
  cout<<s[i];
 }
 }
 cout<<endl;
 for(int i=0;i<strlen(s);i++){
  if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!=' '){
  cout<<s[i];
 }
 }
 cout<<endl;

}




return 0;


}
