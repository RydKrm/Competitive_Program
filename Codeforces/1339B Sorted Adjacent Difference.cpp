#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
scanf("%d",&t);
while(t--){
 int n,ar[100200],p,i;
 vector<pair<int,int>>vec;
 scanf("%d",&n);
 vec.resize(n);
 for(i=0;i<n;i++){
   scanf("%d",&ar[i]);
   }
  // sort(ar,ar+n);
  for(i=0;i<n-1;i++){
   vec[i].first = abs(ar[i+1]-ar[i]);
   vec[i].second = ar[i];
 }
 vec[n-1].first = abs(ar[n-1]-ar[0]);
 vec[n-1].second = ar[n-1];
 sort(vec.begin(),vec.end());
 for(i=0;i<n;i++) printf("%d ",vec[i].second);
 printf("\n");
}
return 0;
}
