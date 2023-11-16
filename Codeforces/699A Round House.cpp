#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,p,i;
cin>>n>>a>>b;

p = fabs(b);
if(b==0){
    cout<<a<<endl;
    goto down;
}
else if(n==a){
    if(b>0){
        a=0;
for(i=1;i<=p;i++){
   a++;  //cout<<"a = "<<a<<endl;cout<<"i = "<<i<<endl;
  if(a==n && i<p){
    a=0;
  }
}
}
 else if(b<0){
        a=n;
for(i=1;i<=p;i++){
   a--;  //cout<<"a = "<<a<<endl;cout<<"i = "<<i<<endl;
  if(a==0 && i<=p){
    a=n;
  }
}
}

}
else if(b>0){
for(i=1;i<=p;i++){
  a++;      //cout<<"a = "<<a<<endl;cout<<"i = "<<i<<endl;
  if(a==n && i<p){
    a=0;
  }
}
}
else {
  for(i=1;i<=p;i++){
  a--;
  if(a==0 && i<=p){
    a=n;
  }
}
}
cout<<a<<endl;


down:
return 0;
}
