#include<iostream>
#include<algorithm>
using namespace std;
int ar[10010],n,p,cnt=0,m,i;
int main(){
cin>>n;
for(i=0;i<n;i++) {
 cin>>p;
 ar[p]++;
}
 for(i=0;i<n;i++) {
  if(ar[i]>cnt) cnt=ar[i];
}
 cout<<n-cnt<<endl;
return 0;
}
