#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
 int n;
 cin>>n;
 map<int,int> mp;
 for(int i=0;i<n;i++){
    int k;
    cin>>k;
    mp[k]++;
 }
 vector<int> vc;
 for(auto x:mp){
    vc.push_back(x.second);
 }
int sum = 0;
 sort(vc.begin(),vc.end());
 if(vc.size()==1 && n==1) cout<<"YES"<<endl;
 else if(vc.size()==1 && n>1 ) cout<<"NO"<<endl;
 else{
    for(int i=0;i<vc.size()-1;i++){
        sum += vc[i];
    }
 if((sum+1)<vc[vc.size()-1]) cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 }


 return 0;
}
