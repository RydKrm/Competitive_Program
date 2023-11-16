#include<iostream>
#include<string>
using namespace std;
int main(){
 string str[10];
 for(int i=0;i<8;i++){
        cin>>str[i];
    for(int j=0;j<7;j++){
        if(str[i][j]==str[i][j+1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
 }

 cout<<"YES"<<endl;
return 0;
}
