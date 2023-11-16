#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int i,n;
 char sudo[10][10];
 for(i=1;i<10;i++)
   cin>>sudo[i];


 for(i=0;i<10;i++){
  if(sudo[i][i]==1) sudo[i][i]=2;
  else sudo[i][i] = 1;
 }
 for(i=1;i<10;i++)
 //  for(int j=1;j<10;j++)
  //cin>>sudo[i][j];
   cout<<sudo<<endl;

}
return 0;
}
