#include<iostream>
using namespace std;

 int i,j;

bool coprime(int b){
    int count=0;
                       // cout<<"b= "<<b<<endl;
 for(i=2;i<b;i++){
    if(b%i==0){
        count++;       // cout<<"cout = "<<count<<endl;
    }
 }
 if(count>0){
    return false;
 }
 else{
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
    again:                  // cout<<"b = " <<b<<endl;  cout<<"loop"<<endl;
    if(coprime(c)==true && coprime(d)==true){
      cout<<"x = "<<c<<" "<<"y = "<<d<<endl;
                                         // cout<<"loop"<<endl;
    }
    else {
         c--;
         d++;
        goto again;
    }

 }
 else {
    b=n/2;
    c=b+1;
    d=b;
    again2:

    if(coprime(c)==true && coprime(d)==true){
      cout<<c<<" "<<d<<endl;
    }
    else {
            c++;
            d--;
        goto again2;
    }
 }
return 0;
}
