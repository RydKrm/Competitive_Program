#include<iostream>
#include<string.h>
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

 int i,j,a,b,count=1,ary2[100],m=0,ary[100],sub=0,msub=0;
 char str[100];
 str[0] = 'A';
 cin>>str;

 a = strlen(str);  cout<<"a = "<<a<<endl;
 if(a==1 && cheak(str[0])==true){
    cout<<"1"<<endl;
    goto down;
 }
  else if (a==1 && cheak(str[0])==false){
    cout<<"2"<<endl;
    goto down;
 }
 ary[0] = 0;
 for(i=0;i<a;i++){
    if(cheak(str[i])==true){
        ary[m] = i;    cout<<"i = "<<ary[m]<<endl;
       m++;;
    }
 }

 ary[0]=0;
 ary[m] = a;
 for(i=0;i<=m;i++){
    sub = ary[i+1]-ary[i]; cout<<"i2 = "<<sub<<endl;
    if(sub>msub){
        msub = sub;
    }
 }

 if(msub==0){
    cout<<a+1<<endl;
 }else
 cout<<msub<<endl;

 down:
 return 0;
}
