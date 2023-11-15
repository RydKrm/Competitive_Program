#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main(){
 int ts;
 cin>>ts;
 while(ts--){
    int n,p;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>p;
        mp[p]++;
    }
    int mx=0;
    vector<int> vc;

    for(auto x:mp)vc.push_back(x.second);
    sort(vc.begin(),vc.end());
    for(int i=0;i<vc.size()-1;i++){
        mx += vc[i];
    }
    if(mx>vc[vc.size()-1]) {
        if(n%2) cout<<1<<endl;
        else cout<<0<<endl;
    } else {
      cout<<vc[vc.size()-1]-mx<<endl;
    }

 }

}
