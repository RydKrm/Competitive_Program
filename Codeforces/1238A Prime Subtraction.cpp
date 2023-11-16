#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

bool prime_number(int n){
 int i;

 for(i=2;i<n;i++){
    if(n%i ==0)
        return false;
 }
   return true;

}

int main(){

 long long int n,i,x,y,t;
 bool count;

// int d=3;

 //if(prime_number(d)==true){
 //   cout<<"prime number"<<endl;
 //} else
 //cout<<"not prime " <<endl;

 i=2;
 cin>>t;
 for(int j=0;j<t;j++){
 count=false; i=2;
 cin>>x>>y;

 while(1){
    if(prime_number(i)==false){
        i++;
        continue;
    }
    else if(prime_number(i)==true){   cout<<"this is for "<<i<<endl;
     //int p=x;
        while(1){
          x=x-i;                  cout<<" loop testing "<<endl;
            if(x==y){
                count=true;
                goto down;
            }
            else if(x<y){
                break;
            }
        }
    }
    i++;
    if(i>x){
      goto down;
    }
 }
 down:

     if(count==true){
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }

 }

return 0;
}
