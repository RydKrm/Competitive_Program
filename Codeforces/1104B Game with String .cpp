#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
 int i,j,cnt=0,a;
 char str[1000];
 cin>>str;
 a = strlen(str);   cout<<"a = "<<a<<endl;
 for(i=0;i<a;i++){
    j=0;
     while(j<a){cout<<"Cheak"<<endl;
       if(str[j]==str[j+1]){
        str[j] = '0';
        str[j+1] = '1';
        cnt++;
        break;
       }
       cout<<str<<endl;
    }
 }
cout<<cnt<<endl;
return 0;
}
