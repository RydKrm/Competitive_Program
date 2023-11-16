#include<iostream>
#include<string.h>
using namespace std;
int main(){

 int s=0,i,j,n,cnt=1;
 char str[100][20];
 cin>>n;

 for(i=0;i<n;i++) cin>>str[i];

 for(i=1;i<n;i++){
   // if((str.compare(str[i])) == 0)
   if(strcmp(str[0],str[i])==0)
     cnt++;
 }
 //cout<<"cnt = "<<cnt<<endl;
 s = n-cnt;
// cout<<"for str[0] ="<<str[0]<<endl;
 if(cnt>=s){
    cout<<str[0]<<endl;
 }
 else{
    for(i=1;i<n;i++){
       if(strcmp(str[0],str[i]) != 0){
            cout<<str[i]<<endl;
        break;
    }
    }
 }


return 0;
}
