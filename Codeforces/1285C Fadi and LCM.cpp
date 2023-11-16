#include<bits/stdc++.h>
using namespace std;
int main(){
 long long int x,a,b,i;
 cin>>x;
 for(i=1;i*i<=x;i++){
  if(x%i==0){
    if(__gcd(i,x/i)==1){
     a=i;
     b=x/i;
        }
    }
  }
 cout<<a<<" "<<b<<endl;
 return 0;
}
