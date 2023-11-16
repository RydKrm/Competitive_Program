#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n >> str;
	vector<int> vec;
	for(int i= 0;i<n-1;i++){
		if(str[i] == 'W'){
			str[i] = 'B';
			if(str[i+1] == 'W')str[i+1] = 'B';
			else str[i+1] = 'W';
			vec.push_back(i+1);
		}
	}
	if(str[n-1] == 'W'){
		if(n%2 == 0){
			cout << -1<<endl;
			return 0;
		}
		for(int i=0;i<n/2;i++){
			vec.push_back(i*2+1);
		}
	}
	cout << vec.size() << endl;
	for(int i=0;i<vec.size();i++){
		cout << vec[i] << ' ';
	}
 return 0;
}
