#include<iostream>
using namespace std;
int main(){
 int a,b,c,d,mx,mn,smx,i,j,mnar[100];
 cin>>a>>b>>c>>d;
 if(a>c){
   mn=c;
   for(i=1;i<=100;i++){
     mnar[i]=d+mn*i; cout<<"ar1 = "<<mnar[i]<<endl;
   }
 } else {
      mn=a;
   for(i=1;i<=100;i++){
     mnar[i]=b+mn*i; cout<<"ar2 = "<<mnar[i]<<endl;
   }
 }
if(a>c){
   mx=a;
   for(i=1;i<=100;i++){
     smx = b+mx*i;
     for(j=1;j<=mnar[100];j++){ cout<<"smx1 = "<< smx<<endl;
       if(smx==mnar[j]){
         cout<<smx<<endl;
         return 0;
       }
      }
   }
} else {
   mx=c;
   for(i=1;i<=mnar[100];i++){
     smx = d+mx*i;
     for(j=1;j<=100;j++){ cout<<"smx2 = "<<smx<<endl;
       if(smx==mnar[j]){
         cout<<smx<<endl;
         return 0;
       }
      }
   }
}

cout<<"-1"<<endl;

return 0;
}
