#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int i,j,p,ct=0;
 char str[100][100];
 cin>>p;
 for(i=0;i<p;i++){
    for(j=0;j<p;j++)
        cin>>str[i][j];
 }
 for(i=0;i<p;i++){
    for(j=0;j<p;j++){
      if(str[i][j]=='.'){ //cout<<"ct = "<<ct++<<endl;
        if(str[i+1][j]=='.' && str[i+2][j]=='.'&& str[i+1][j-1]=='.'&&str[i+1][j+1]=='.'){
          str[i][j]='#';
          str[i+1][j]='#';
          str[i+2][j]='#';
          str[i+1][j-1]='#';
          str[i+1][j+1]='#';
         }
     }
  }
 }

   for(i=0;i<p;i++){
    for(j=0;j<p;j++){
        if(str[i][j]=='.'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
 }

 cout<<"YES"<<endl;

return 0;
}
