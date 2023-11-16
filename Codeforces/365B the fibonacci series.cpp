#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int i,n,sum=0,cnt=2,mx=2;
 /// input...
 cin>>n;
 int ar[n+5];
 for(i=0;i<n;i++) cin>>ar[i];

 /// main part...
 if(n<=2) {
  cout<<n<<endl;
  return 0;
 }
 for(i=2;i<n;i++){
  if(ar[i]==(ar[i-1]+ar[i-2])){
    cnt++;
    mx = max(mx,cnt);
  } else
    cnt=2;
 }

 ///output...
 cout<<mx<<endl;

return 0;
}
