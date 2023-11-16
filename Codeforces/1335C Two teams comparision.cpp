#include<iostream>
#include<set>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,a,p;
  set<int> st;
  cin>>n;
  for(int i=0;i<n;i++){
  cin>>a;
  st.insert(a);
  } ///cout<<"size = "<<st.size()<<endl;
  int sz = n-st.size()+1;
  if(n==1) cout<<"0"<<endl;
  else if(st.size()==1)cout<<"1"<<endl;
  else if(st.size()<=n/2) cout<<st.size()<<endl;

  else if(sz<=n/2) cout<<sz<<endl;
  else cout<<n/2<<endl;
 }
return 0;
}
