
#include<iostream>
#include<string>
using namespace std;

int main(){
  int ts;
  cin>>ts;
  while(ts--){
    int n;
    cin>>n;
    string str[2*n];
    int cnt = 0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
          if(cnt%2==0){
            str[i*2][j*2] = '#';
            str[i*2+1][j*2] = '#';
            str[i*2][j*2+1] = '#';
            str[i*2+1][j*2+1] = '#';
          } else {
            str[i*2][j*2] = '.';
            str[i*2+1][j*2] = '.';
            str[i*2][j*2+1] = '.';
            str[i*2+1][j*2+1] = '.';
          }
          cnt++;
       }
    }
    for(int i=0;i<n;i++){
      cout<<str[i]<<endl;
    }


  }

}
