#include<iostream>
using namespace std;
int main(){
 long long int a,b,i,m=1,q=1;
 cin>>a>>b;
  if(a==0) a++;
  if(b==0) b++;

 for(i=a+1;i<=b;i++){
    m = i%10;
    q=q*m;
    if(m==0) {
      cout<<"0"<<endl;
      return 0;
    }
 }
 cout<<q%10<<endl;

return 0;
}
