#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,first,second;
	cin>>str;
	for( int i=0;i<str.size();i++){
	   first+=str[i];
        if(str[i]!='a') second+=str[i];
        if(first.size()+second.size()==str.size()) break;
	}
	if(str==first+second)
		cout<<first<<endl;
	else
		cout<<":("<<endl;

		return 0;
}
