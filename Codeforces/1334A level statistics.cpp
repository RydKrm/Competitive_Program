#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,fg=1,pa,pb,a,b,i;
  cin>>n;
  cin>>pa>>pb;
   if(pa<pb) fg=0;
    for(i=1;i<n;i++){
    cin>>a>>b;
    if(a<pa) fg=0;
    if(b<pb) fg=0;
    if(a-pa<b-pb) fg=0;
    pa=a;
    pb=b;
        }
    if(fg==1)printf("YES\n");
    else printf("NO\n");
    }





return 0;
}
