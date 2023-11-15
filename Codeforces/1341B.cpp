#include<iostream>
#include<vector>
using namespace std;

int main(){

 int ts;
 cin>>ts;
 while(ts--){
  int n,k;
  cin>>n>>k;
  int ar[n+5];
  for(int i=0;i<n;i++) cin>>ar[i];

  vector<int> mask,total;
  mask.push_back(0);

  for(int i=1;i<n-1;i++) {
    if(ar[i]>ar[i-1] && ar[i]<ar[i+1])
      mask.push_back(1);
    else mask.push_back(0);
  }
  mask.push_back(0);

  int sum = 0;

  for(int i=0;i<k;i++){
   sum += mask[i];
   total.push_back(sum);
  }
  int pos = k-2;
  for(int i=k;i<n;i++){
    sum += mask[i];
    sum -= mask[i-pos];
    total.push_back(sum);
  }

  int mx=0,loc=0;
  for(int i=0;total.size();i++){
    if(mx>total[i]){
      mx = total[i];
      loc = i;
    }
  }

  cout<<mx+1<<" "<<loc-(k-1)<<endl;


 }

 return 0;
}
