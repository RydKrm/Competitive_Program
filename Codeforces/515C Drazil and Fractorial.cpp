#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,i,j;
    int ar[10];
    cin>>n;
        char ara[n];
    scanf("%s",ara);
    for(i=0;i<=9;i++) ar[i]=0;
    for(i=0;i<n;i++){
    if(ara[i]=='2') ar[2]++;
    else if(ara[i]=='3') ar[3]++;
    else if(ara[i]=='4'){
        ar[2]+=2;
        ar[3]++;}
    else if(ara[i]=='5'){
        ar[5]++;}
    else if(ara[i]=='6'){
        ar[3]++;
        ar[5]++;}
    else if(ara[i]=='7') ar[7]++;
    else if(ara[i]=='8'){
        ar[2]+=3;
        ar[7]++;}
    else if(ara[i]=='9'){
        ar[3]+=2;
        ar[2]++;
        ar[7]++;}
    }
    for(i=9;i>0;i--){
        for(j=0;j<ar[i];j++){
            cout<<i;
    }
}
return 0;
}
