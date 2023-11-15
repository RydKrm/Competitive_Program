#include<iostream>
#include<algorithm>
using namespace std;
int main(){

  int ts;
  cin>>ts;
  while(ts--){
    long long int a,b,n;
    cin>>a>>b>>n;
   long long int ar[n+5];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    long long int sum = b;
    for(int i=0;i<n;i++){
        sum += min(a-1,ar[i]);
    }
    cout<<sum<<endl;
  }


 return 0;
}
