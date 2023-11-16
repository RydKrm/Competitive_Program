#include<iostream>
#include<algorithm>
using namespace std;

 int cnt=0;

 int joys(int mx,int mn){
 if(mx%2==0){
    mx-=2;
    cnt+=mx/2;
    mn+=mx/2;
    mx = 2;
 } else {
   mx-=1;
    cnt+=mx/2;
   mn+=mx/2;
   mx = 1;
 }

 if(mx<=2&&mn<=2) {
    cnt++;
   return cnt;
 }
 else {
  int con = mx;
  mx = max(mx,mn);
  mn = min(con,mn);
  joys(mx,mn);
 }

 return cnt;
 }



 int main(){
 int a,b;
 cin>>a>>b;

 if(a==1&&b==1){
    printf("0\n");
    return 0;
 }

 int mx = max(a,b);
 int mn = min(a,b);

  cnt = joys(mx,mn);

 cout<<cnt<<endl;







    return 0;
}






