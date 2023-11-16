#include<iostream>
#include<set>
using namespace std;
int main(){
 int n,m,ar[100010],i,b,c;
 set<int> st;
 cin>>n>>m;
 for(i=0;i<m;i++) cin>>ar[i];

 if(n==1){
    for(i=0;i<m;i++)
        cout<<"1";
    return 0;
 }
    for(i=0;i<m;i++){
      b = st.size();
      if(ar[i]>0) st.insert(ar[i]);
      c = st.size();
      if(b!=c) ar[i] = 0;
      if(st.size()==n){
        ar[i] = -1;
        i = -1;
        st.clear();
    }
    }
    for(i=0;i<m;i++){
    if(ar[i]==-1) cout<<"1";
    else cout<<"0";
 }
  return 0;
  }
