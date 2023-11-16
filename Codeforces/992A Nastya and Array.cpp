#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main(){
 int i,n,p;
 set<int>st;
 scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%d",&p);
   if(p==0) continue;
   st.insert(p);
 }
 printf("%d\n",st.size());
return 0;
}
