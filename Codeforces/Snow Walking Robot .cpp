#include<iostream>
#include<string>
using namespace std;
int main(){

 int ct=0,l=0,r=0,u=0,d=0,t;
 string str;
 cin>>t;
 while(t--){
 cin>>str;
 for(int i=0;i<str.size();i++){
    if(str[i]=='U') u++;
    else if(str[i]=='D') d++;
    else if(str[i]=='L') l++;
    else if(str[i]=='R') r++;
 }

int sum = u+r+l+d;
 sum=(sum/4);
 sum*=4;
 if(sum==0) cout<<"1"<<endl;
 else cout<<sum<<endl;
 //for(int i=0;i<sum;i++){
    for (int j=0;j<u;j++)cout<<'U';
    for(int j=0;j<l;j++) cout<<'L';
    for (int j=0;j<d;j++)cout<<'D';
    for(int j=0;j<r;j++) cout<<'R';
 //}

 }
return 0;
}
