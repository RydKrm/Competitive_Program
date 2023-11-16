#include<iostream>
using namespace std;
int main(){

 int n,i,j;
 cin>>n;

 for(i=1;i<=n;i++){
  if(i%2==1){
    for(j=1;j<=n;j++){
        if(j%2==1) cout<<'W';
        else cout<<'B';
    }cout<<endl;
     }
   else {
      for(j=1;j<=n;j++){
        if(j%2==1) cout<<'B';
        else cout<<'W';
    }cout<<endl;
  }
 }


return 0;
}
