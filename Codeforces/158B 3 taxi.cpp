#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

 int n,i,j,t,ary[100000],m,p,c1=0,c2=0,c3=0,c4=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);

 for(i=0;i<n;i++){
   if(ary[i]==1){
    c1++;
   }
   else if(ary[i]==2){
    c2++;
   }
 else if(ary[i]==3){
    c3++;
   }
   else if(ary[i]==4){
    c4++;
   }
 }
    cout<< "c1 = "<<c1<<endl; cout<< "c2 = "<<c2<<endl;cout<< "c3 = "<<c3<<endl;cout<< "c4 = "<<c4<<endl;

 m=(c1 + c2);
 p = m/4;
 m=m%4;




return 0;
}
