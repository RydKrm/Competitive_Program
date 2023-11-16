#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 int len,i,j,n,k,cnt=1,ar[1000],m=0;
 string str;
 cin>>n;
 cin>>str;
 len = str.size();
 for(i=0;i<len;i++){
        if(str[i]=='0') continue;
    for(j=0;j<len;j++){
        if(i==j) continue;
        else if(str[i]==str[j]){
            cnt++;
            str[j] = '0';
        }
    }
    ar[m] = cnt;cnt=1;m++;
 }
 //cout<<"m = "<<m<<endl;
 //cout<<str<<endl;
 //for(i=0;i<m;i++) cout<<ar[i]<<" ";

 for(i=0;i<m;i++){
    if(ar[i]%n!=0){
        cout<<"-1"<<endl;
        return 0;
    }
 }
 m=0;
 char str2[1000];
 for(i=0;i<len;i++){
    if(str[i]!='0'){
        str2[m] = str[i];
         m++;
    }
 }

 //cout<<str2<<endl;
 for(i=0;i<n;i++){
    cout<<str2;
 }
 //cout<<"test "<<endl;
return 0;
}
