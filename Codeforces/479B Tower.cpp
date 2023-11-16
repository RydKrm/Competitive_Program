#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
 int n,k;
 cin>>n>>k;
 int ar[n+5];
 for(int i=0;i<n;i++) cin>>ar[i];
 vector<int> form,to;

 for(int i=0;i<k;i++){
 int mx = 0,mn = 999999,pi=0,pj=0;
  for(int j=0;j<n;j++){
    if(ar[j]>mx){
        mx = ar[j];
        pi = j;
    }
    if(ar[j]<mn){
        mn = ar[j];
        pj = j;
    }
  }
 //cout<<" mn = "<<mn<<endl;
// cout<<" mx = "<<mx<<endl;
  if((ar[pi]-ar[pj])<2) break;
  else {
    ar[pi]--;
    ar[pj]++;

    form.push_back(pi+1);
    to.push_back(pj+1);

  }

 }

 int mx = 0,mn = 999999;
 for(int i=0;i<n;i++){
    mx = max(mx,ar[i]);
    mn = min(ar[i],mn);
 }

 cout<<mx-mn<<" "<<to.size()<<endl;
 for(int i=0;i<to.size();i++){
    printf("%d %d \n",form[i],to[i]);
 }


return 0;

}
