#include<iostream>
using namespace std;
int main(){
 int x,y,n,k,p,i,m,fg=0;
 cin>>y>>k>>n;
  p = y%k;
  p = k-p;
  for(i=p;i<=n-y;i+=k){
     if((y+i)%k==0){
       cout<<i<<" ";
       fg=1;
       }
  }
  if(fg==0) cout<<"-1"<<endl;
return 0;
}
