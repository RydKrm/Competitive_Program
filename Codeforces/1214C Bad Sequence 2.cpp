#include<iostream>
#include<string.h>
using namespace std;
int main(){
 int n,a,i,j,cnt1=0,cnt2=0,cnts=0,cntp=0;
 char str[200000];
 cin>>n;
 cin>>str;
 for(i=0;i<n;i++){
    if(str[i]==')') cnt1++;
    else cnt2++;
}
 if(cnt1!=cnt2){
    cout<<"NO"<<endl;
     return 0;
 }
 for(i=0;i<n;i++){
    if(str[i]==')'&&str[i+1]==')'){
            cnts++;
    }
    if(str[i]=='('&&str[i+1]=='('){
            cntp++;
    }
    if(cnts>cntp) {
        cout<<"NO"<<endl;
        return 0;
    }
 }
 cout<<"YES"<<endl;
return 0;
}

