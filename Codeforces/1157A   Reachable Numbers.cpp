#include<iostream>
using namespace std;
int main(){

 int a,n,cnt=0;
 cin>>n;
 while(1){
    if(n==1) break;
    n++; cout<<"n1 = "<<n<<endl;
   if(n%10 !=0){
      cnt++;  cout<<"cnt1 = "<<cnt<<endl;
   }
    if(n%10==0){
     cnt++; cout<<"cnt = "<<cnt<<endl;
        while(1){
           if(n%10 !=0){
            cnt++;
             break;
           }
       else {
        n = n/10;
       }
   }
  cout<<"n2 = "<<n<<endl;

  }
 }
//cnt=cnt-1;
 cout<<++cnt<<endl;
return 0;
}
