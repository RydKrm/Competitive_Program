#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  long long int a,b,n,k,i,p,m;
  cin>>k>>n>>a>>b;
  p=n;
  for(i=0;i<=p;i++){
     m = n*a+i*b; //cout<<"m "<<m<<endl;
     if(m<k){
     cout<<n<<endl;
     goto down;
    } else n--; //cout<<"n "<<n<<endl;
   }
   if(n<1) cout<<"-1"<<endl;
   down:;
 }
return 0;
}
