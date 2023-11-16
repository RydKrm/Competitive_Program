#include<iostream>
using namespace std;
int main(){
 int n,cnt=0;
 cin>>n;
 while(n){
    cnt++;
    n/=10;
 }
 if(cnt==1)
 {
     printf("1\n");
 }
 else if(cnt==2)
 {
     printf("2\n");
 }
 else if(cnt==3)
 {
     printf("3\n");
 }
 else
 {
     printf("More than 3 digits\n");
 }

return 0;
}
