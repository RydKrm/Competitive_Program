#include<iostream>
#include<string>
using namespace std;
int main(){
 int len,n,i,a,j;
 string str[100];
 cin>>n;
 for(i=0;i<n;i++) cin>>str[i];
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
     if(str[i].size()<str[j].size()){
        swap(str[i],str[j]);
     }
    }
 }
 for(i=1;i<n;i++){
    if(str[i].find(str[i-1])==string::npos){
            cout<<"NO"<<endl;
            return 0;
        }
    }
 cout<<"YES"<<endl;
 for(i=0;i<n;i++) cout<<str[i]<<endl;
 return 0;
}
