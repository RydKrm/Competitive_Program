#include<iostream>
using namespace std;
int main(){
 float a,b,c,n,pos,cnt=0,p;
 int r;
 cin>>a>>b>>c;
 n = a/b; cout<<"n = "<<n<<endl;
  for(int i=0;i<6;i++){
    cnt++;
    n = n*10; cout<<"n = "<<n<<endl;
    r=n; cout<<"r1 = "<<r<<endl;
    r = r%10; cout<<"r2 = "<<r<<endl;
    //n = n/10; cout<<"n = "<<n<<endl;
    if(r==c){
     cout<<cnt<<endl;
     return 0;
    }
 }
 cout<<"-1"<<endl;
return 0;
}
