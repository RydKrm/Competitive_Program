#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
 float r,d,n,x,y,rc,i,p;
 int cnt=0;
 scanf("%f%f",&r,&d);
 scanf("%f",&n);
 for(i=0;i<n;i++){
   scanf("%f%f%f",&x,&y,&rc);
   x = abs(x);
   y = abs(y);
   p = sqrt(x*x+y*y);
   cout<<"r "<<p+rc<<endl;
   cout<<"p "<<p<<endl;
   cout<<"d "<<p-rc<<endl;
   if(p+rc<=r&&p-rc>=r-d) cnt++;
   cout<<" cnt "<<cnt<<endl;
 }
 printf("%d\n",cnt);
return 0;
}
