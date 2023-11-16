#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){

 int i,j,k,n,a=-1;
 string  s,t;
 cin>>k;
 while(k--){
    cin>>n;
    cin>>s;
    cin>>t;
    a=-1;
    for(i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(a==-1) a = i;
        }
            swap(s[i],t[i]);
              if((s.compare(t)) == 0){
                cout<<"Yes"<<endl;
                 goto down;
                  }
                }

    for(i=a+1;i<n;i++){
        if(s[i]!=t[i]){
            swap(t[i],s[a]);
              if((s.compare(t)) == 0) {
                cout<<"Yes"<<endl;
                goto down;
              }
        }
    }
        cout<<"No"<<endl;
        down:;
 }

return 0;
}
