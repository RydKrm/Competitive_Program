#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int s,t;
cin>>t;
for(s=1;s<=t;s++){

long long int i,j,l,v,v1,m,n,r,fact,factn,factr;
cin>>l;
for(i=0;i<=l;i++){
 for(j=0;j<=i;j++){
  if(j==0){
  cout<<1;}
 if(j>=1&&j<i){
 fact = 1;factn = 1;factr=1;
  for(n=i; n>0; n--){
 factn=factn*n;
 }

 for( r=j; r>0; r--){
 factr=factr*r;
 }

 for(m=i-j; m>0; m--){
  fact=fact*m;
}
 v1=factr*fact;
 v=factn/v1;
 cout<<" "<<v;
 }
 if(i>=1&&j==i){
 cout<<" "<<1;}


}

cout<<endl;

}

}

return 0;


}
