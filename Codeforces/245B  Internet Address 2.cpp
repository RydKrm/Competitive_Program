#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, ans="";
    cin >> str;
    int i=0, n=str.length();
    if(str[0]=='f'){
        ans += "ftp://";
        i = 3;
    }
    else if(str[0]=='h'){
        ans += "http://";
        i = 4;
    }

    int flag=0;
    for(int j=i;j<n;j++){
        if(i!=j&&j<n&&str[j]=='r'&&str[j+1]=='u' && flag==0){
            ans += ".ru";
            flag = 1;
            j++;
            if(j!=n-1) ans += '/';
        }
        else ans += str[j];
    }
    cout<<ans<<endl;

 return 0;
}
