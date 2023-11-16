#include<iostream>
using namespace std;


int bsearch(int ar[],int n,int x){

 int mid,first=0,last=n-1;
 while(first<=last){
  mid = (first+last)/2;
    if(ar[mid]==x) return mid;
    else if(ar[mid]<x) first = mid;
 else last = mid;
 }
 return -1;
}

int main(){

 int n,ar[1000],i,j,a,temp;
 cout<<"enter how many value you want to enter "<<endl;
 cin>>n;
 cout<<"Enter the numbers "<<endl;
 for(i=0;i<n;i++) cin>>ar[i];

 for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(ar[j]>ar[j+1]){
            temp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
        }
    }
 }

 cout<<"Sorted list is "<<endl;
 for(i=0;i<n;i++) cout<<ar[i]<<" ";
 cout<<endl;

 cout<<"Enter the value you want to search "<<endl;
 cin>>a;

 int b = bsearch(ar,n,a);
 if(b==-1) cout<<"Not found "<<endl;
 else {
    cout<<a<<" is found in "<<b+1<<" position "<<endl;
 }

return 0;
}
