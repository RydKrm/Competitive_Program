#include<iostream>
using namespace std;
int main(){
 int tc;
 cin>>tc;
 while(tc--){
  float h,c,t;
  cin>>h>>c>>t;

  /// h>50 c<0.7 t>5600

  if(h>50&&c<0.7&&t>5600)
  {
      printf("10\n");
  }
  else if(h>50&&c<0.7)
  {
      printf("9\n");
  }
   else if(c<0.7&&t>5600)
  {
      printf("8\n");
  }
   else if(h>50&&t>5600)
  {
      printf("7\n");
  }
   else if(h>50||c<.7||t>5600)
  {
      printf("6\n");
  }
   else
  {
      printf("5\n");
  }


 }
return 0;
}
