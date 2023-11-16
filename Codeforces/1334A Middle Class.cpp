#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 long long int n,i,p=0,sm=0,ar[100020],x;
  cin>>n>>x;
  for(i=0;i<n;i++){
   cin>>ar[i];
   sm+=ar[i];
  }
  sort(ar,ar+n);
  while(n){
   if(sm/n>=x) break;
   sm-=ar[p];
   n--;
   p++;
  }
  cout<<n<<endl;
 }
return 0;
}
