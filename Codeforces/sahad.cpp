#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"Enter 1st Round score"<<endl;
 cin>>num;
 if(num<280) {
        cout<<"Fail to complete the 1st round"<<endl;
    } else {
    cout<<"Enter the 2nd round"<<endl;
    cout<<"Enter the 2nd round score"<<endl;
    cin>>num;
    if(num<400){
        cout<<"Fail to complete the 2nd round"<<endl;
    } else{
        cout<<"Enter the 3rd round"<<endl;
    cout<<"Enter the 3rd round score"<<endl;
    cin>>num;
     if(num<500){
            cout<<"Lose in the last round"<<endl;
     }
     else{
            cout<<"You are the Champian"<<endl;
     }
    }

 }


return 0;
}
