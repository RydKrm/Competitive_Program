#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main(){
 int n,i,p,cnt=0,s;
 vector<int> vec;
  vector<int>:: iterator it;
 cin>>n;
 for(i=0;i<n;i++){
  cin>>p;
  vec.push_back(p);
 }
 sort(vec.begin(),vec.end());

  while(vec.size()!=0){
   for(i=0;i<vec.size()-1;i++){
    cout<<vec[i]<<" ";
     if(vec[i]<vec[i+1]){
      cnt++;
       vec[i]=0;
     }
   }

   s = vec.size(); cout<<"s1 "<<s<<endl;
   vec[s-1] = 0;
   for(i=0;i<vec.size();i++) cout<<vec[i]<<" ";
    cout<<endl;
   cout<<"testing "<<endl;
   it=vec.begin();
   for(i=0;i<vec.size();i++){
    if(vec[i]==0) vec.erase(it);
    it++;
   }
   s = vec.size(); cout<<"s2 "<<s<<endl;

  }

 cout<<cnt<<endl;

 return 0;
}
