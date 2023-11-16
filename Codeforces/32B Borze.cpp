#include<iostream>
//#include<string>
#include<string.h>
using namespace std;

int main(){

int y,i;
char str[200];

 cin>>str;

y=strlen(str);

for(i=0;i<y;i++){
    if(str[i] == '.'){
        cout<<0;
    }
    else if(str[i]=='-' && str[i+1]=='.'){
        cout<<1;
        i++;
    }
    else if(str[i]=='-' && str[i+1]=='-'){
        cout<<2;
        i++;
    }
}


return 0;}
