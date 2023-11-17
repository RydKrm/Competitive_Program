#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

int main(){

    ll n;cin>>n;
    ll arr[n];
    vector<ll> num;
    for(int i=0;i<n;i++){
       cin>>arr[i];
       num.push_back(arr[i]);
    }

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
           arr[i] = arr[i-1];
        } 
    }

    ll mx = 0;

    for(int i=0;i<n;i++){
        if(arr[i]!=num[i]){
            mx += abs(arr[i]-num[i]);
        }
    }

    cout<<mx<<endl;

    return 0;
}