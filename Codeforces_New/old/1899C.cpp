#include<iostream>
using namespace std;

int main(){
  int ts; cin>>ts;
  while(ts--){
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[n];

    int sum=0;
    for(int i=0;i<n;i++) {
      sum += ar[i];
    }
cout<<"sum  "<<sum<<endl;
  }

  return 0;
}