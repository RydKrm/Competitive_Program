#include<iostream>
using namespace std;
bool isprime(int n){
for(int i=2;i*i<n;i++){
     if(n%i==0)
    return false;
}
return true;
}

int main(){
 int n,i,p=0,a,b;
 cin>>n;
 a = 2;
 b = a+n;
 while(1){
 if(isprime(a)==false&&isprime(b)==false){
    cout<<b<<" "<<a<<endl;
    return 0;
 }
 else {
    a++;
    b++;
 }
 }
return 0;
}
