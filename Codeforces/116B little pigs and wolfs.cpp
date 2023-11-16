#include<iostream>
#include<string>
using namespace std;
int main(){
 int n,i,j,m,cnt=0,p;
 cin>>n>>m;
 char str[n+5][m+5];
 for(i=0;i<n;i++) cin>>str[i];

 for(i=0;i<n;i++){
   for(j=0;j<m;j++){
     if(str[i][j]=='W'){
       if(str[i][j-1]=='P'||str[i][j+1]=='P'||str[i-1][j]=='P'||str[i+1][j]=='P'){
         cnt++;
         str[i][j]='1';
         if(str[i][j-1]=='P') str[i][j-1]='0';
        else  if(str[i][j+1]=='P') str[i][j+1]='0';
        else if(str[i-1][j]=='P') str[i-1][j]='0';
        else if(str[i+1][j]=='P') str[i+1][j]='0';
       }
     }
   }
 }

 

cout<<cnt<<endl;
return 0;
}
