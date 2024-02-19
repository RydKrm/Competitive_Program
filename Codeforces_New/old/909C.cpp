#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = -100000000, max_ending_here = 0;

    for (int i = 1; i < size-1; i++){
        if(a[i]%2-a[i-1]%2==0 && a[i]%2-a[i+1]%2==0){
            max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
        }
        
    }
    return max_so_far;
}

int main(){
  
  int ts;cin>>ts;
  while(ts--){
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];

    int ans = maxSubArraySum(ar,n);
    cout<<"ans = "<<ans<<endl;



  }


    return 0;
}