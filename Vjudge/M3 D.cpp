#include<iostream>
#include<algorithm>
using namespace std;
 int main(){
int tc;
cin>>tc;
while(tc--){
  int n,k,mx=0;
  cin>>n>>k;
  for(int i=2;i<=k;i++){
    mx = max(mx,n%i);
  }
  cout<<mx<<endl;

}




 return 0;
}
