#include<iostream>
#include<vector>
using namespace std;

int main(){
 long long  x;
 cin>>x;
 vector<long long> vc;

 long long p = x;
 while(p){
    long long d = x%10;
    x/=10;
    long long p = 9-d;
    p = min(p,d);

 }



return 0;
}
