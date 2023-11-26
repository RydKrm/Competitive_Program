#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main(){
   ll D;
   cin>>D;
   
   ll x = sqrt(D);
   ll les = D-x*x;
   ll y = sqrt(les);

  cout<< abs(x*x+y*y - D) <<endl;
  

    return 0;
}