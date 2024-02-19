#include<iostream>
using namespace std;

int main(){
  int ts; cin>>ts;
  while(ts--){
    string str;
    cin>>str;
    int a=0,b=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A') a++;
        else b++;
    }

    if(a>b) cout<<"A"<<endl;
    else cout<<"B"<<endl;

  }

  return 0;
}