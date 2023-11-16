#include<bits/stdc++.h>
using namespace std;
int main(){
int a,n,ar[100000],i,j;

 cin>>n;
 for(i=0;i<n;i++){
    cin>>ar[i];
 }
 vector <int> vec(ar,ar+n);
 vector <int> vec1;
 vector <int> :: iterator it;
 sort(vec.begin(),vec.end());
 it = vec.begin();
 for(i=0;i!=vec.size();i++){
    if(vec[i]==vec[i+1]==vec[i+2]){
        cout<<"NO"<<endl;
        goto down;
    }
   else if(vec[i]==vec[i+1]){
          it++;
       vec1.push_back(vec[i]);
        vec.erase(it);
    }
 }
 cout<<"YES"<<endl;
 cout<<vec.size()<<endl;
 for(it=vec.begin();it!=vec.end();it++){
    cout<<*it<<" ";
 }

 cout<<endl;
 cout<<vec1.size()<<endl;
 for(it=vec1.begin();it!=vec1.end();it++){
    cout<<*it<<" ";
 }
down:
return 0;
}
