#include<iostream>
#include<algorithm>
#include<set>
#include<iterator>
#include<vector>
using namespace std;
int main(){
int i,n,p;
set<int>st;
vector<int>vec;
set<int>::iterator it;
cin>>n;
for(i=0;i<n;i++){
    cin>>p;
    st.insert(p);
}
if(n==1||st.size()==1){
    cout<<"0"<<endl;
    return 0;
}
if(st.size()>3) {
 cout<<"-1"<<endl;
 return 0;
}
for(it=st.begin();it!=st.end();it++) {
  vec.push_back(*it);
}
sort(vec.begin(),vec.end());
if(vec.size()==2&&(vec[1]-vec[0])%2==0){
 cout<<(vec[1]-vec[0])/2<<endl;
 return 0;
}
if(vec.size()==2){
 cout<<(vec[1]-vec[0])<<endl;
 return 0;
}
if(vec.size()==3){
 if((vec[1]-vec[0])!=(vec[2]-vec[1])){
  cout<<"-1"<<endl;
  return 0;
 }
 }
  cout<<vec[1]-vec[0]<<endl;
return 0;
}
