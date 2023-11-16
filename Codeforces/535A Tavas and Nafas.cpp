#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	string s[28]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	if(a<20)
        cout<<s[a]<<endl;
	else if(a%10==0){
	    cout<<s[a/10+18]<<endl;;
    }
	else
        cout<<s[(a-a%10)/10+18]<<"-"<<s[a%10]<<endl;
    return 0;
}
