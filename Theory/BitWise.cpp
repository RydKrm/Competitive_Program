#include<iostream>
#include<vector>

using namespace std;

int main(){

  int a=5,b=7;
  
  // Clear all bits from LSB to ith bit 
  // if n = 001101100 and i = 4 then make it 001100000
  // we need a mast and make AND operation 
  // mask will be m =  111100000
  // m = ~m (000011111) 
  // m = m+1(000100000)
  // m = i+1>>1 (000000001)
  // go to  reverse way 
  // m = 1<<i+1; (000100000)
  // m = m-1; (000011111)
  // m = ~m;  (111100000)     

   cout<<"Enter the number and position"<<endl;
   int n,i;cin>>n>>i;
   int mask = ~((1<<i+1)-1);
   int ans = n&mask;
   cout<<"Clear bit from LSB to ith Bit "<<ans<<endl; 

   // Clear MSB to i 
   // mask = 00001111
   // same process just not use ~ NOT operator 

   

    return 0;
} 