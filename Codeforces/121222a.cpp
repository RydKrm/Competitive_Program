#include<iostream>
using namespace std;
int main(){
 float n,d,sum=0;
 char x;
 cout<<"Enter Catagory"<<endl;
 cin>>x;
 cout<<"Enter the unit "<<endl;
 cin>>d;
 if(x=='A'){
 if(d<=75){
    sum += d*3.80;
 } else if(76<=d && d<=200)
 sum += d*5.14;
 else if(201<=d && d<=300)
    sum += d*5.36;
 else if(301<=d && d<=400)
    sum += d*5.63;
 else if(401<=d && d<=600)
    sum += d*8.75;
 else sum += d*9.98;

 sum += sum*0.2;
  } else if(x=='B'){
  sum += d*3.82;
 } else {
  sum += d*7.66;
 }
 cout<<"Total = "<<sum<<endl;


 return 0;
}
