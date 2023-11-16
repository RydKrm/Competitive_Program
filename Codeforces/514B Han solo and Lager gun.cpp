#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int main(){
 double n,x1,y1,x,y,p,i;
 cin>>n>>x1>>y1;
 set<double>st;
 for(i=0;i<n;i++){
  cin>>x>>y;
  x-=x1;y-=y1;
  p = atan(y/x);
  st.insert(p);
 }
 cout<<st.size()<<endl;
return 0;
}
