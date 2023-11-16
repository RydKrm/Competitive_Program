#include<iostream>
#include<list>
#include<set>
using namespace std;
int main(){
 int k,n,x,pr=0;
 list <int> lst;
 set <int> st;
 cin>>n>>k;
 for(int i=0;i<n;i++){
    cin>>x;
    st.insert(x);
    if(st.size()>pr){
        if(lst.size()==k){
            st.erase(st.find(lst.back()));
            lst.pop_back();
            pr--;
        }
        lst.push_front(x);
        pr++;
    }
 }
 int b = lst.size();
 cout<<lst.size()<<endl;
 while(b--){
    cout<<lst.front()<<" ";
    lst.pop_front();
 }

return 0;
}
