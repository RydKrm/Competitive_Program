#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int ts;
    cin>>ts;
    while(ts--){
        string str;
        int n,k;
        cin>>n>>k;
        cin>>str;
        
        map<char,int> mp;
        for(int i=0;i<n;i++){
          mp[str[i]]++;
        }
        int odd=0;
        for(auto i:mp){
            if(i.second%2) odd++;
        }
        odd -= k;
        if(odd>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}