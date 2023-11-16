#include<iostream>
using namespace std;
int main(){
    int n,i,count=0,win=0,max;
    long long int k;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    max=arr[0];
    for(i=1;i<n;i++){
     if(max>arr[i])count++;
     else{
        max=arr[i];
        count=1;
        }
        if(count==k){
            win=max;
            break;
        }
    }
    if(win==0)cout<<n<<endl;
    else cout<<win<<endl;

    return 0;
}
