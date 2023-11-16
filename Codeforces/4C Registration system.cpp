#include<iostream>
#include<set>
using namespace std;
 int main(){
 int a,c,i,n,cnt=0;
 string str;
 set<string>st;
 cin>>n;
 for(i=0;i<n;i++){
    cnt=0;
    cin>>str;
    a = st.size();
    st.insert(str);
     c = st.size();
     if(a!=c) cout<<"OK"<<endl;
     else {
        cnt++;
        cout<<str<<cnt<<endl;
     }
 //   while(a!=c){
 //     st.insert(str);
  //    c = st.size();
   //     cnt++;
  //    }
  //  if(cnt==0) cout<<"OK"<<endl;
   // else cout<<str<<cnt<<endl;
  }
 return 0;
}
