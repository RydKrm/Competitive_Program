#include<iostream>
#include<math.h>
using namespace std;
int main(){
 long long int n,p,m;
 cin>>n;
 p = pow(4,n)-2*pow(3,n-1);
 if(n==1)p++;
 cout<<p<<endl;
return 0;
}
