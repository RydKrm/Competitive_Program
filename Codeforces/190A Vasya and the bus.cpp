#include<iostream>
using namespace std;
int main(){
 int n,m,mx,mn,p;
 cin>>n>>m;
 if(n==0&&m!=0) {
 cout<<"Impossible"<<endl;
 return 0;
 }
  mx = n+m-1;
  if(m==0) mx = m+n;//cout<<"mx = "<<mx<<endl;
  if(n>=m) mn = n;
  else {
    mn = n-1;
    p = m-mn;
    mn = mn+p;
  }
 cout<<mn<<" "<<mx<<endl;
return 0;
}
