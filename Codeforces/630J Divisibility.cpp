#include<iostream>
using namespace std;
int main(){

long long int n,p=11;
 cin>>n;

 while(1){
   if(p%2==0&&p%3==0&&p%4==0&&p%5==0&&p%6==0&&p%7==0&&p%8==0&&p%9==0&&p%10==0)
     break;
     else p++;
 }
 //cout<<"p = "<<p<<endl;
n = n/p;
cout<<n<<endl;
return 0;
}
