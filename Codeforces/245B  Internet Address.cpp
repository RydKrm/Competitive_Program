#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;
char str[100],str2[100];
int main(){
 int i,tp=0,ru=0,len,cnt=0,j;
 scanf("%s",str);
 len = strlen(str);
 for(i=0,j=0;i<len;i++,j++){
        str2[j] = str[i];
    if(str[i]=='p'&&str[i-1]=='t'&&tp==0){
        str2[j+1] = ':';
        str2[j+2] = '/';
        str2[j+3] = '/';
        j+=3;
        tp = 1;
    }
 if(str[i]=='u'&&str[i-1]=='r'&&ru==0&&str[i-2]!='p'){
        str2[j-1] = '.';
        str2[j] = 'r';
        str2[j+1] = 'u';
        str2[j+2] = '/';
        j+=3;
        //i+=2;
        ru = 1;
        str2[j] = str[i];
        i++;
    }
    //   jump:;
    //   cout<<"ru = "<<ru<<endl;
 }

 for(i=0;i<strlen(str2);i++){
 printf("%c",str2[i]);
 }
return 0;
}
