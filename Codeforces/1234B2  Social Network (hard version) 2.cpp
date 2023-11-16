#include<iostream>
#include<set>
using namespace std;
int main(){

 int a,n,p;
 cin>>n>>p;
 set <int> st;
 set <int> :: iterator it;
 for(int i=0;i<n;i++){
    cin>>a;
    st.insert(a);
    it = st.end();cout<<"begin = "<<*it<<endl;
    cout<<"size = "<<st.size()<<endl;
    if(st.size()>p){
        it = st.begin();cout<<"delete item = "<<*it<<endl;
        st.erase(it);
        cout<<"size after delete = "<<st.size()<<endl;
    }
 }
 cout<<st.size()<<endl;
 for(it=st.end();it!=st.begin();it--){
    cout<<*it<<" ";
 }


return 0;
}
