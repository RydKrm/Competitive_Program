#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

 int n,i,j,t,ary[100000],count=0,c1=0,c2=0,c3=0,c4=0;
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

  if(c1<c3)c1=0;
    else c1=c1-c3;  cout<<"mc1 = "<<c1<<endl;

  //if(c2%2==1) c1=c1-2;
  t=c2%2;
  if(t==1){
    c1= c1-2;
    if(c1<0){
        c1=0;
    }
  }     cout<<"mc1 = "<<c1<<endl;

  c2=c2/2 + t;cout<<"mc2 = "<<c2<<endl;
 // c1=fabs(c1-2*t);

 if(c1>=4){
 c1= c1/4 + c1%2;cout<<"mc1 = "<<c1<<endl;
 }


  int sum = c1+c2+c3+c4;

  cout<<sum<<endl;


return 0;
}
