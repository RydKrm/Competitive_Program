#include<iostream>
using namespace std;

int main(){
  int ts; cin>>ts;
  while(ts--){
    int n;cin>>n;
    string str[n];
    for(int i=0;i<n;i++) cin>>str[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str[i][j]=='1'){
                if(str[i][j+1]=='0'){
                    cout<<"TRIANGLE"<<endl;
                    goto jump;
                }
                else if(str[i+1][j]=='1'){
                    cout<<"SQUARE"<<endl;
                    goto jump;
                }else if(str[i+1][j]=='0'){
                    cout<<"TRIANGLE"<<endl;
                    goto jump;
                } 
            }
        }
    }
    jump:;

  }

  return 0;
}