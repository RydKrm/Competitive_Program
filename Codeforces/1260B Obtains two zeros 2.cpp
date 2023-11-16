#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int a,b,x,y,p,t,m,n;
 cin>>t;
 while(t--){
  cin>>x>>y;
  a = max(x,y);
  b = min(x,y);

  if((a+b)%3!=0||b*2<a){
  cout<<"NO"<<endl;
  continue;
  }
  cout<<"YES"<<endl;
 }
return 0;
}
