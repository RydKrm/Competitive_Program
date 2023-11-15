#include<iostream>
#include<vector>
using namespace std;

vector<int> nums;
int N = 10e6+100;

int isPrime(int n){
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return i;
    }
    return 0;
}

int main(){

   int ts;
   cin>>ts;
   while(ts--){
       int n,m;
       cin>>n>>m;

       if(n==1 || m==1)cout<<"YES"<<endl;
       else if(n<=m) cout<<"NO"<<endl;
       else {
        if(n%2==0) cout<<"NO"<<endl;
        else{
            int num = isPrime(n);
            if(num==0 ) cout<<"YES"<<endl;
            else if(num>=m) cout<<"YES"<<endl;
            else if(num<m) {
              cout<<"NO"<<endl;
            }
        }
       }
   }
    return 0;
}