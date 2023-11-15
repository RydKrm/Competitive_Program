#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long

int main(){
    int ts;
    cin>>ts;
  while(ts--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    ll sum=0;
    for(int i=0;i<n;i++){
     if(str[i]=='R') sum += n-i-1;
     else if (str[i]=='L')sum += i;
    }
   // cout<<"sum = "<<sum<<endl;
    int mid = n/2;
    vector<long long> ans;
    int cnt=0;
    for(int i=0;i<n;i++){
          if(str[i]=='L' && i<mid){
            cnt = n-1-i-i;
            ans.push_back(cnt);
          } else if(str[i]=='R' && i>=mid){
            cnt = i-(n-i-1);
            ans.push_back(cnt);
          }
    }
    sort(ans.begin(),ans.end(),greater<ll>());

    for(int i=0;i<ans.size();i++){
            sum += ans[i];
        cout<<sum<<" ";
    }
    for(int i=ans.size();i<n;i++)
        cout<<sum<<" ";

   // for(int i=ans.size();i<n;i++){
   //   cout<<ans[ans.size()-1]<<" ";
   // }
    cout<<endl;

  }

    return 0;
}

