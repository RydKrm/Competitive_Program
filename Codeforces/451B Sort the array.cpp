#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
int main(){
 int n,i,p,fg=0,a=0,b=0;
 vector<int>arm;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  scanf("%d",&p);
  arm.push_back(p);
 }
 for(i=0;i<n-1;i++){
  if(arm[i]>arm[i+1]&&fg==0){
    a = i;
    b=i+1;
    fg=1;
    continue;
  }
  if(arm[i]>arm[i+1]&&fg==1){
    b = i+1;
  }
 }
   //cout<<a+1<<" "<<b+1<<endl;
 reverse(arm.begin()+a,arm.begin()+b+1);
 //for(i=0;i<n;i++) cout<<arm[i]<<" "; cout<<endl;
 for(i=0;i<n-1;i++){
  if(arm[i]>arm[i+1])
   printf("no\n");
   goto down;
   }
 }
  printf("yes\n");
 if(a==0&&b==0) printf("1 1\n");
 else printf("%d %d\n",a+1,b+1);
 down:;
return 0;
}
