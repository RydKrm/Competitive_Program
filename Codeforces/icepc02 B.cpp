#include<iostream>
#include<set>
using namespace std;
int main(){
int n,ar[100000],a,b,p,ct=0,i;
cin>>n;
for(i=0;i<n;i++) cin>>ar[i];
set<int>st;
for(i=0;i<n;i++){
    a = st.size();
   if(ar[i]>0){
    st.insert(ar[i]);
   }
    b = st.size();
    if(a==b){
       if((ar[i]+1)>0){
        st.insert(ar[i]+1);}
        b=st.size();
    }
    if(a==b){
       if((ar[i]-1)>0){
        st.insert(ar[i]-1);
       }
    }
}
cout<<st.size()<<endl;
return 0;
}
