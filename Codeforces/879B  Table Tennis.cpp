#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
 ll a,b,i,n,k,cnt=0;
 cin>>n>>k;
 vector<ll>vec;
 vector<ll> :: iterator it,it1;
 for(i=0;i<n;i++){
    cin>>a;
    vec.push_back(a);
 }
 if(n<=k){
    sort(vec.begin(),vec.end());
    it1 = vec.end()-1;
    cout<<*it1<<endl;
    return 0;
 } else {
     while(1){
        it1=vec.begin();
     for(it=vec.begin()+1;it!=vec.end();it++){
        if(*it1>*it){
            cnt++;
        // cout<< " cnt = "<<cnt<<endl;
          if(cnt==k){
              //  cout<<k<<endl;
                cout<<*it1<<endl;
                return 0;
            }
        }
        else {
              vec.push_back(*it1);
              vec.erase(it1);
              cnt=0;
            }
        }
      }
   }
return 0;
}
