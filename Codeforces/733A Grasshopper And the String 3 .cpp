#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;

bool cheak(char c){
 if(c=='A' || c=='E' || c=='I' || c=='O'||c=='U'||c=='Y'){
    return true;
 }
 else
    return false;
}

int main(){

 int i,j,a,b,count=1,m=1,ary[100],sub=0,msub=0;
 char str[100];
 cin>>str;
 a = strlen(str);  cout<<"a = "<<a<<endl;
 str[a] = 'A';

 // for(i=a;i>=0;i--){
 //   str[i] = str[i-1];
 //}
 //str[0] = 'A';

 if(a==1 && cheak(str[0])==true){
    cout<<"1"<<endl;
    goto down;
 } else if(a==1 && cheak(str[0])==false){
    cout<<"2"<<endl;
    goto down;
 }

 for(i=0;i<a;i++){
    if(cheak(str[i])==true){
        ary[m] = i;
          m++;
    }
 }


 for(i=0;i<m;i++){
    cout<<ary[i]<<endl;
 }

 //ary[m] = a;
 for(i=0;i<m;i++){
    sub = ary[i+1] - ary[i];  cout<<" sub = "<<sub<<endl;
    if(msub<sub){
        msub = sub;
    }
 }

 if(msub==a){
    cout<<a+1<<endl;
 }
 else
{
   cout<<msub<<endl;
}

 down:
 return 0;
}
