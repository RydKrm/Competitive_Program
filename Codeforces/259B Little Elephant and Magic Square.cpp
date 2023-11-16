#include<iostream>
using namespace std;
int main(){
 int x,y,z,a1,a2,b1,b2,c1,c2;
 cin>>x>>a1>>a2>>b1>>y>>b2>>c1>>c2>>z;

 //processing part
 x = c1+c2+b1+b2-a1-a2;
 if(x%2==1) x = x/2+1;
 else x = x/2;
 y = c1+c2-x;
 z = b1+b2-x;

 cout<<x<<" "<<a1<<" "<<a2<<endl;
 cout<<b1<<" "<<y<<" "<<b2<<endl;
 cout<<c1<<" "<<c2<<" "<<z<<endl;


return 0;
}
