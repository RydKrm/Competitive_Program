#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;

    int mx=0,now=1;

    for(int i=1;i<str.size();i++){
        if(str[i-1]==str[i]) now++;
        else {
            mx = max(mx,now);
            now = 1;
        }
    }

    mx = max(mx,now);

    cout<<mx<<endl;
    

}