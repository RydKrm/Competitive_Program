#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
 int ary[200000],i,j,n,k,x,p;
 cin>>n>>k;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }

 list <int> lst;  //(ary+0,ary+n);
 list <int> :: iterator it,it2;

 for(i=0;i<n;i++){
   it = find(lst.begin(), lst.end(), ary[i]);
     if(it!=lst.end()){
        continue;
     }
        else {
            lst.push_front(ary[i]);  // cout<<" ary = "<<ary[i]<<endl;
            p=lst.size();            // cout<<"p = "<<p<<endl;
            if(p>k){
                lst.pop_back();
            }
        }
    }

   x = lst.size();
   cout<<x<<endl;
   for(it = lst.begin();it != lst.end();it++){
    cout<<*it<<endl;
  }

return 0;
}
