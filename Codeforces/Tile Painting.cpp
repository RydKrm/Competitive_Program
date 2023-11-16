#include<iostream>
#include<math.h>
using namespace std;
bool cheak(int x){
  int i;
  for(i=2;i<=x/2;i++){
    if(x%i==0)
        return false;
  }
  return true;
}

int main(){
 int i,n,j,ct=0,a,p;
 cin>>n;
 p = n/2;
 if(cheak(n)==true){
    cout<<n<<endl;
 }
 else
    cout<<p<<endl;
return 0;
}
