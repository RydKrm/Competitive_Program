#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int a,n,s,t,ary[1000][10],count=0,i,j,m=0;

 cin>>s>>n;
 for( i=0;i<n;i++){
     for(j=0;j<2;j++){
    cin>>ary[i][j];
 }
}
  for(i=0;i<n;i++){
        m=ary[i][0];
    for(j=i+1;j<n;j++){
        if(ary[i][0]>ary[j][0]){
            t = ary[i][0];
            ary[i][0]=ary[j][0];
            ary[j][0] = t;

             t = ary[i][1];
            ary[i][1]=ary[j][1];
            ary[j][1] = t;
        }
    }
  }


 for(i=0;i<n;i++){
        if(s>ary[i][0]){
            s += ary[i][1]; // cout<<"s = "<<s<<endl;
            count++;
        }
        else
            break;
    }

 if(count<n){
    cout<<"NO"<<endl;
 }
 else
    cout<<"YES"<<endl;

return 0;
}
