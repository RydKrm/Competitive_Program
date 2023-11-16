#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
 int t,a,b,x,y,c,d,f;
 cin>>t;
 while(t--){
    cin>>a>>b>>x>>y;
 x++;y++;
   int a1 = abs((x-1)*b);  cout<<"a1  = "<<a1<<endl;
   int a2 = abs((a-x)*b);  cout<<"a2  = "<<a2<<endl;
   int a3 = abs((y-1)*a);  cout<<"a3  = "<<a3<<endl;
   int a4 = abs((b-y)*a);  cout<<"a4  = "<<a4<<endl;

 c = max(a1,max(a2,max(a3,a4)));
 cout<<c<<endl;


 }

return 0;
}
