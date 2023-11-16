#include<iostream>

using namespace std;

bool prime_number(int n){
 int i;

 for(i=2;i<n;i++){
    if(n%i ==0)
        return false;
 }
   return true;
}



int main(){

 long long int n,i,x,y,t,sub=0;
 bool count;
 i=2;
 cin>>t;
 for(int j=0;j<t;j++){
 count=false; i=2;
 cin>>x>>y;

   sub = x-y;  //  cout<<"this is sub = "<<sub<<endl;

  while(1){
    if(prime_number(i)==false){
        i++;
        continue;
    }
    else if(prime_number(i)== true){   // cout<<" loop testing" <<endl;
        if(sub%i==0){
          count=true;
          break;
        }
        else i++;
    }
    if(i>=sub){
        break;
    }
  }
  if(count==true){
    cout<<"YES"<<endl;
  }
  else
    cout<<"NO"<<endl;
 }
}
