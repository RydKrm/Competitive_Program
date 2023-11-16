#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len;
    string str,str1;
    cin>>str1>>str;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    len = str.size();
    if(str1=="R"){
       for(int i=0;i<len;i++)
       {
        int pos = s.find(str[i]);
        cout<<s[pos-1];
       }
    }
    else
    {
       for(int i=0;i<len;i++)
       {
        int pos = s.find(str[i]);
        cout<<s[pos+1];
       }
    }

    return 0;
}
