#include<iostream>
#include<algorithm>
using namespace std;
int n,a,t,ar[100],i,j,p,k;
int main(){
 cin>>t;
 while(t--){
    cin>>a;
    if(a%60==0) cout<<"red"<<endl;
    else if(60%a==0) cout<<"red"<<endl;
    else {
   int m = 0;
   int b = 1;
   n = 0;
    while(a!=0){
        p = a%10;
        a = a/10;
        ar[m] = p;
        m++;
    }
    if(m<3) m = 3;
    cout<<"m = "<<m<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            n = 0;b=1;
            if(i!=j){
            swap(ar[i],ar[j]);
            for(k=0;k<m;k++){
                n += ar[k]*b;
                b *= 10;
            } cout<<" n = "<<n<<endl;
            if(n%60==0){
                cout<<"red2"<<endl;
                goto down;
            }
          }
        }
    }
    cout<<"cyan"<<endl;
  }
  down :;
   }
return 0;
}
