#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   int ts;
   cin>>ts;
   while(ts--){
    int n;
    cin>>n;
    n = n*2;
    int arr[n+5];
    vector<int> first,second;
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr,arr+n);
    int ans=0;
    first.push_back(arr[0]);
    for(int i=1;i<n/2;i++){
        ans += arr[i]-arr[i-1];
        first.push_back(arr[i]);
    }

    second.push_back(arr[n/2]);
    for(int i=(n/2)+1;i<n;i++){
        ans += arr[i]-arr[i-1];
        second.push_back(arr[i]);
    }
      
     cout<<ans<<endl;
     for(int i=0;i<n/2;i++){
        cout<<first[i]<<" "<<second[i]<<endl;
     } 

   }
    return 0;
}