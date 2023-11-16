#include<iostream>
using namespace std;
int main(){
 int p,i,n,m,sum=0;
 cin>>n>>m;
 for(i=0;i<n;i++){
  cin>>p;
  sum+=p;
 }
 if(sum>m) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
return 0;
}
