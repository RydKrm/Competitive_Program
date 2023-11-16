#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int a,b,s;
 cin>>a>>b;
   s = fabs(a-b);
  if(a==0 && b==0){
    cout<<"NO"<<endl;
  }
  else if(s>1){
    cout<<"NO"<<endl;
  }
  else cout<<"YES"<<endl;
return 0;
}
