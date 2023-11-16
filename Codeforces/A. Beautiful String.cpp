#include<iostream>
#include<string.h>
using namespace std;
int main(){

 int n,t,i,a;
 char str[100010];
 cin>>t;
 while(t--){
    cin>>str;
    n = strlen(str);
    for(i=0;i<n;i++){
        if(str[i]==str[i+1]&&str[i]!='?'){ cout<<"-1"<<endl;
        goto down;
        }
    }
    if(str[0]=='?') {
            if(str[1]=='a') str[0] = 'b';
          else if(str[1]=='b') str[0] = 'c';
          else if(str[1]=='c') str[0] = 'a';
          else if(str[1]=='?') str[0] = 'a';
    }
    if(str[0]=='?'&&n==1){
         str[0]='a';
    }
    for(i=0;i<n;i++){
        if(str[i]=='?'){
           if(str[i-1]=='a') str[i]='b';
            else if(str[i-1]=='b') str[i]='c';
            else if(str[i-1]=='c') str[i]='a';
        }
   }

    for(i=0;i<n;i++){
        if(str[i]==str[i+1]){
           if(str[i-1]=='a'&&str[i+1]=='c')str[i]='b';
           else if(str[i-1]=='c'&&str[i+1]=='a')str[i]='b';
           else if(str[i-1]=='b'&&str[i+1]=='c')str[i]='a';
           else if(str[i-1]=='c'&&str[i+1]=='b')str[i]='a';
           else if(str[i-1]=='a'&&str[i+1]=='b')str[i]='c';
           else if(str[i-1]=='b'&&str[i+1]=='a')str[i]='c';
        }
    }
    cout<<str<<endl;

  down:;
 }


return 0;
}
