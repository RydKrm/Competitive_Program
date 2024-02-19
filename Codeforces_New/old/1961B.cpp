#include<iostream>
using namespace std;

int main(){

  int ts;
  cin>>ts;
  while (ts--){ 
    int a,b;
    cin>>a>>b;
    if(a==1) {
        cout<<b*b<<endl;
    } else {
        int ans;
        for(int i=2;i<=a;i++){
            if((i*b)%a==0){
                ans = i*b;
                break;
            }
        }
        // cout<<a<<" "<<b<< " -> "<<ans<<endl;
        cout<<ans<<endl;
    }
  }
  
    return 0;
}