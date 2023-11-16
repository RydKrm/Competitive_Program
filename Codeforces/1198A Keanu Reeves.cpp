#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int n,i,z=0,o=0,a,b,c;
 string str;
 cin>>n>>str;
 if(n==2&&str[0]=='1'&&str[1]=='0') cout<<"2\n1 0"<<endl;
 else if(n==2&&str[0]=='0'&&str[1]=='1') cout<<"2\n0 1"<<endl;
 else if(n%2==1) cout<<"1\n"<<str<<endl;
 else {
    for(i=0;i<n;i++){
        if(str[i]=='1') o++;
        else z++;
    }
    if(z!=o)cout<<"1\n"<<str<<endl;
    else {
        cout<<"2"<<endl;
         if(str[0]=='1')cout<<"1 ";
         else cout<<"0 ";
         for(i=1;i<n;i++){
            cout<<str[i];
        }
        cout<<endl;
    }S
 }
return 0;
}
