#include<iostream>
using namespace std;
 int i,j,n;
bool coprime(int b,int c,int n){
        int count=0;
//cout<<"cheak function1"<<endl;
 for(i=2;i<n;i++){           // cout<<"b = "<<b<<"c = "<<c<<endl;
  if(b%i==0 && c%i==0){
    count++;
  }
 }
// cout<<"cheak function2"<<endl;
 if(count>0){
 return false;
 }
 else {
    return true;
 }
}
int main(){
 int a,b,c,n,d;
 cin>>n;
   if(n%2==0){
        b=n/2;
        c=b-1;
        d=b+1;
    again:                         // cout<<"b = " <<b<<endl;  cout<<"loop"<<endl;
    if(coprime(c,d,n)==true){
      cout<<c<<" "<<d<<endl;     // cout<<"loop"<<endl;
    }
    else {
         c--;
         d++;
        goto again;
    }
 }
 else {
    b=n/2;
    c=b;
    d=b+1;
    again2:
    if(coprime(c,d,n)==true){
      cout<<c<<" "<<d<<endl;
    }
    else {
            c--;
            d++;
        goto again2;
    }
 }
return 0;
}

