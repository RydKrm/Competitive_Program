#include<iostream>
using namespace std;
int main(){
int n,t,ct=0;
char str[1000];
cin>>n;
cin>>str;
for(int i=0;i<n;i++){
    if((str[i]=='U'&&str[i+1]=='R')||(str[i]=='R'&&str[i+1]=='U')){
     ct++;
     i=i+1;
     } else
     ct++;
}
 cout<<ct<<endl;
return 0;
}
