#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  long long int ans,x,y,a,b,m,n,ans2,mn,mx;
  cin>>x>>y>>a>>b;
  mn = min(x,y);
  mx  = max(x,y);
  m = mx-mn;
   ans = mn*b+m*a;
   ans2 = a*x+a*y;
   mn = min(ans,ans2);
  cout<<mn<<endl;
 }
return 0;
}
