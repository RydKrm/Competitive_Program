#include<iostream>
#include<string.h>
using namespace std;

bool cheak(char c){
 if(c=='A' || c=='E' || c=='I' || c=='O'||c=='U'||c=='y'){
    return true;
 }
 else
    return false;
}

int main(){

 int i,j,a,b,sum=0,count=1,ct=1;
 char str[100];
 cin>>str;

 a = strlen(str);
 for(i=0;i<a;i++){
  if(cheak(str[i])==true){
    for(j=i+1;j<a;j++){
        if(cheak(str[j])==false){
            count++;       cout<<"count = "<<count<<endl;
             if(j-count==a){
            ct=count;
            break;
    }
        }
        else if( cheak(str[j])==true){
            i=j-1;
            if(ct<count){
                ct=count;   cout<<" ct = "<<ct<<endl;
            }
            count=1;

            break;
        }

    }
  }
 }

 if(ct==1){
    cout<<a+1<<endl;
 }else
 cout<<ct<<endl;

return 0;
}
