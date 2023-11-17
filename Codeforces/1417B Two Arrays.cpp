#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){

   int ts;cin>>ts;
   while(ts--){
     int n,k;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++) cin>>arr[i];

     // Divided all number into two section X and Y. 
     // X contain all the number less then T/2 
     // Y contain all the number greater then T/2 
     // numbers which is equal to T equally distrib then along X and Y 

     int ex=0,ey=0;
     for(int i=0;i<n;i++){
        if(arr[i]<k/2) cout<<1<<" ";
        else if(arr[i]>k/2) cout<<0<<" ";
        else {
            if(k%2==1) cout<<1<<" ";
            else {
                if (ex == ey)
                {
                    cout << 1 << " ";
                    ex++;
                }
                else if (ex > ey)
                {
                    cout << 0 << " ";
                    ey++;
                }
            }
           
        }
     } 
     cout<<endl;
   
   }
    return 0;
}