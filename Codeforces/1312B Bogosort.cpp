#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t,ar[1000],i,j,n,m;
 cin>>t;
 while(t--){
  cin>>n;
  for(i=0;i<n;i++)
    cin>>ar[i];
 //for(i=0;i<n;i++){
 //  for(j=i;j<n;j++){
   //     if(j-ar[j]!=i-ar[i]){
   //         swap(ar[i],ar[j]);

   //     }
   // }
 //}

 sort(ar,ar+n,greater<int>());
   for(i=0;i<n;i++) {
    cout<<ar[i]<<" ";
   }
 cout<<endl;
}

return 0;
}
