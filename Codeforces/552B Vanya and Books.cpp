/// start -> 8:25 AM
#include<iostream>
using namespace std;
using ll = long long ;
int main(){
 ll n;
 cin>>n;

 ll p=n,cnt=0,sum=0,total=0;
 while(p){
  cnt++;
  p/=10;
 }

 sum=n*cnt;
 ll tmp = cnt-1;
  ll num = 9;

 for(int i=1;i<cnt;i++){
    total += num*tmp;
    tmp--;
    num*=10;
 }


 cout<<sum-total<<endl;


return 0;
}
