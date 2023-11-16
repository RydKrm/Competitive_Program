#include<iostream>
using namespace std;

int main(){

 int a,b,c,d,e,n,m,i,j,sum=0,ary[100],count=0;
 char str[100];
 cin>>n;
 char str2[n-1];

 for(i=0;i<n;i++){
    cin>>str;
    str2[i]=str[0];

 }


 for(i=0;i<n;i++){            //   cout<<" strng = " <<str2<<endl;
    for(j=0;j<n;j++){
        if(i==j)  count++;         // cout<<"count1 = "<<count<<endl;}
        else if(str2[j]=='0'){
            //goto down;
           // ary[i]=0;
        }
        else if(str2[i]==str2[j]){
            count++;              //   cout<<"count2 = "<<count<<endl;
            str2[j]='0';
        }
    }
   // down:
  // if(count==1){
  //  ary[i]=0;
  // } else {

    ary[i]=count;                //    cout<<"ary = " <<ary[i]<<endl;
    count=0;
 }

/*
  for(i=0;i<n;i++){
    cout<<ary[i]<<endl;
 }  */



 for(i=0;i<n;i++){
   if(ary[i]%2==0){
    b=ary[i]/2;
    c=(b*(b-1))/2;
    c=c*2;             // cout<<" c1 = "<<c<<endl;
    sum = sum +c;
   }
   else if(ary[i]%2==1){
    b=ary[i]/2+1;      // cout<<"b = "<<b<<endl;
     c=(b*(b-1))/2;     //   cout<<"c = "<<c<<endl;
    sum = sum + c;     // cout<<" c2 = "<<c<<endl;

     d=ary[i]/2;       //  cout<<" d = "<<d<<endl;
     e=(d*(d-1))/2;
    sum = sum + e;     //  cout<<" e = "<<e<<endl;

   }


   // sum = sum + (ary[i] + ary[i]-1)/2;
 }

 cout<<sum<<endl;

return 0;
}
