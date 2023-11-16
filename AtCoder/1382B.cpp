#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    scanf("%d",&n);
    int ar[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(ar[i]==1) ans*=-1;
    }
    if(ans==1) printf("First\n");
    else printf("Second\n");


 }




return 0;
}
