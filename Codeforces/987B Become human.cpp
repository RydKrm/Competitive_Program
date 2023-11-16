#include<iostream>
#include<math.h>
using namespace std;
int main(){
  double n,m,a,b,i;
 cin>>n>>m;
 if(n==m){
 cout<<"="<<endl;
 return 0;
 }
   a =m*log10(n);
 cout<<"a = "<<a<<endl;
   b =n*log10(m);
   cout<<"b = "<<b<<endl;
 if(a>b) cout<<">"<<endl;
 else if(a==b) cout<<"="<<endl;
 else cout<<"<"<<endl;
return 0;
}
