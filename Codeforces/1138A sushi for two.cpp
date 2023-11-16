#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
 int n,i,ar[100100],cnt=1,mx=0,mn;
 vector<int>vec;
 scanf("%d",&n);
 for(i=0;i<n;i++) scanf("%d",&ar[i]);
 for(i=0;i<n;i++){
  if(ar[i]!=ar[i+1]){
    vec.push_back(cnt);
    cnt=1;
  } else cnt++;
 }
 vec.push_back(cnt);

 //for(i=0;i<vec.size();i++) cout<<vec[i]<<endl;
 int ln = vec.size();
 for(i=0;i<ln-1;i++){
  mn = min(vec[i],vec[i+1]);
  if(mn>mx) mx = mn;

 }


 printf("%d\n",2*mx);


return 0;
}
