#include<iostream>
using namespace std;
int main(){

 char str[10];
 cin>>str;
 //cout<<str<<endl;

 if(str[0]=='a'&&str[1]=='1' || str[0]=='h'&&str[1]=='1' || str[0]=='a'&&str[1]=='8' || str[0]=='h'&&str[1]=='8')
    cout<<'3'<<endl;
 else if(str[0]=='a'||str[0]=='h'||str[1]=='1'||str[1]=='8')
    cout<<'5'<<endl;
 else cout<<'8'<<endl;

return 0;
}
