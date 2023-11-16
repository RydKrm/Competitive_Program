#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int lcm(int a,int b){
 int mx = max(a,b);
 while(1){
    if(mx%a==0&&mx%b==0) break;
    else mx++;
 }
 return mx;
}

int main(){
 int i,n,m,s;
 set<int> st,st1;
 set<int>::iterator it;
 cin>>n;
 for(i=0;i<n;i++){
 cin>>m;
  st.insert(m);
 }
 for(it=st.begin();it!=st.end();it++){
   s = lcm(*it,*it++);
   st1.insert(s);
 }
 if(st1.size()>1) cout<<"No"<<endl;
 else cout<<"Yes"<<endl;
return 0;
}
