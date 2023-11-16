#include<iostream>
#include<string>
using namespace std;

int vowel(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		return 1;
	}
	return 0;
}
int main(){
	string str;
	cin >> str;
	for (int i=0;i<str.length();i++){
		if(str[i]!='n'&&!vowel(str[i])&&!vowel(str[i + 1]))
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
