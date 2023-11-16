#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int i,n,p,c=1,k=0;
 cin>>n;
 vector<int>vec;
 vector<int>::iterator it;
 for(i=0;i<n;i++){
  cin>>p;
  vec.push_back(p);
 }

 sort(vec.begin(),vec.end());

   for(it=vec.begin();it!=vec.end();it++){
   if(*it>=c){
           k++;
           c++;
       }
   }
 cout<<k<<endl;
return 0;
}
