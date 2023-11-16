#include<iostream>
using namespace std;
int func(int n){
 if(n==-1)
    return 0;
 else {
   /// cout<<"n1 = "<<n<<endl;
    func(n-1);
    func(n-1);
    ///cout<<" 2nd step"<<endl;
    cout<<"n2 = "<<n<<" "<<endl;
 }
}

int main(){
 int n;
 cin>>n;
 func(n);
return 0;
}
