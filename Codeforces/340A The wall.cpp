#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b,x,y,cnt=0,p,i;
 cin>>x>>y>>a>>b;

 int mn = min(x,y);
 int mx = max(x,y);
 if(mx%mn==0) p = mx;
 else p = mn*mx;
 for(i=1;;i++){
    if(i*p>b) break;
    if(i*p>=a) cnt++;
 }
  cout<<cnt<<endl;
return 0;
}
