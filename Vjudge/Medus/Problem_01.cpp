#include<iostream>
using namespace std;

int main(){
  int ts;
  cin>>ts;
  while(ts--){
    string s;
    cin>>s;
    for(int i=1;i<=8;i++){
        cout<<s[0]<<i<<endl;
    }
    for(char ch='a';ch<='h';ch++){
        cout<<ch<<s[1]<<endl;
    }
  }

    return 0;
}