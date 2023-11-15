#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    int start=1,en=n/2,fg=0;
    vector<int> vc;
    for(int i=0;i<n/2;i++)){
        if(arr[i]==arr[n/2-1]){
            fg=1;
            break;
        }
        vc.push_back(arr[start]);
        vc.push_back(arr[en-1]);
        start++;
        en++;
    }
    if(fg || n%2==1) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for(int i=0;i<vc.size();i++){
            cout<<vc[i]<<" ";
        }cout<<endl;
    }
 }
return 0;
}
