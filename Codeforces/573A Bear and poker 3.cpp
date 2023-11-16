#include<iostream>
#include<set>
using namespace std;
int main(){
 int i,n,p;
 set<int>st;
 cin>>n;
 for(i=0;i<n;i++) {
  cin>>p;
  while(p%2==0) p=p/2;
  while(p%3==0) p=p/3;
  st.insert(p);
  if(st.size()>1){
    cout<<"No"<<endl;
    return 0;
  }
 }
cout<<"Yes"<<endl;
return 0;
}
