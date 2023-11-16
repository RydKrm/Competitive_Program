#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int a,b,c,d,e,f,m,pr,pr1;
 cin>>a;cin>>b;cin>>c;cin>>d;
 cin>>e;cin>>f;

 if(e<f){
    m= d-min(b,c);
    pr = min(b,c)*f;cout<<" pr = "<<pr<<endl;
    pr1 = min(m,a)*e; cout<<" pr1 = "<<pr1<<endl;
    cout<<pr+pr1<<endl;
 } else {
    m = d-a;
    pr = a*f;
    pr1 = min(m,min(b,c));
    cout<<pr+pr1<<endl;
 }


return 0;
}
