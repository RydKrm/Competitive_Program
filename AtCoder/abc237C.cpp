#include<iostream>
#include<vector>
using namespace std;
int check[10];
void checking(){

   for(int i=1;i<10;i++){
    if(check[i]==0) {
        cout<<"No"<<endl;
        exit(0);
    }
   }
}

int main(){
  
  
  int ar[10][10];
  for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
       cin>>ar[i][j];
    }
  }

  for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
       check[ar[i][j]]++;
    }
    checking();
    for(int i=0;i<10;i++) check[i] = 0;

    for(int j=1;j<10;j++){
       check[ar[j][i]]++;
    }
    checking();
    for(int i=0;i<11;i++) check[i] = 0;
  }

  for(int i=1;i<10;i+=3){
    for(int j=1;j<10;j+=3){
        for(int k=i;k<i+3;k++){
            for(int l=j;l<j+3;l++){
                check[ar[k][l]]++;
            }
        }
        checking();
        for(int i=0;i<11;i++) check[i] = 0;
    }
  }

  cout<<"Yes"<<endl;


    return 0;
}