#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int i,j,n,bcnt=0,wcnt=0,ar[1000],m=-1;
 string str;
 cin>>n;
 cin>>str;
 for(i=0;i<n;i++){
  if(str[i]=='B') bcnt++;
  else wcnt++;
 }
 if((bcnt%2==1&&wcnt%2==1)&&bcnt!=0&&wcnt!=0) {
  cout<<"-1"<<endl;
  return 0;
 }

 for(i=0;i<n-2;i++){
   if(str[i]!=str[i+1]){
    ar[++m] = i+2;
     if(str[i+1]=='W') str[i+1] = 'B';
     else str[i+1]='W';
      if(str[i+2]=='W') str[i+2] = 'B';
     else str[i+2]='W';
   }
 }

 cout<<str<<endl;
 if((str[n-3]==str[n-2])&&(str[n-2]!=str[n-1])){
   str[n-3]=str[n-2]=str[n-1];
   ar[++m] = n-2;
 }

 cout<<str<<endl;
 cout<<m+1<<endl;
 for(i=0;i<=m;i++){
   cout<<ar[i]<<" ";
 }

return 0;
}
