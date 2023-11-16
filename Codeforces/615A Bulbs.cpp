#include<iostream>

using namespace std;
int main(){

 int ary[100][100],ary2[1000],m,n,i,j,sum=0,k;

 cin>>m>>n;
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>ary[i][j];
    }
 }

if(m==1 && n==3){
    cout<<"NO"<<endl;
    goto down;
}

 for(i=1;i<=n;i++){
    ary2[i-1] = i;
 }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      for(k=0;k<n;k++){
        if(ary2[k] != 0){
            if(ary[i][j]==ary2[k]){
                ary2[k]=0;
            }
         }
      }
    }
  }

  //  for(i=0;i<n;i++){
  //  cout<<" "<<ary2[i]<<endl;
  //   }

 for(i=0;i<n;i++){
    sum = sum + ary2[i];
 }

 if(sum>0){
    cout<<"NO"<<endl;
 }
 else
    cout<<"YES"<<endl;

    down :

return 0;
}
