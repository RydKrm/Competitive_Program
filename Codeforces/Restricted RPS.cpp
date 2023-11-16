#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int a,b,c,ca=0,cb=0,cc=0,i,j,t,s,count=0;
 char str[100];
 float n;

 cin>>t;
 for(j=0;j<t;j++){
    cin>>n;
    cin>>a>>b>>c;
    cin>>str;
    ca =a; cb=b; cc=c; count=0;
    s = strlen(str);
    for(i=0;i<s;i++){
        if(str[i] =='R'){
            if(cb>0){
                count++;
                cb--;
            }
        }
        else if(str[i] == 'P'){
           if(cc>0){
                count++;
                cc--;
            }
        }
        else if(str[i] == 'S'){
           if(ca>0){
                count++;
                ca--;
            }
        }
    }

    if(n/2>count){
        cout<<"NO"<<endl;
    }
     else {
       cout<<"YES"<<endl;
       for(i=0;i<s;i++){
        if(str[i] == 'R'&& b>0){
            cout<<"P";
            b--;
        }
        else if(str[i] == 'P' && c>0){
            cout<<"S";
            c--;
        }
        else if(str[i] == 'S' && a>0){
            cout<<"R";
            a--;
        }
    }
       cout<<endl;
    }
 }

return 0;
}
