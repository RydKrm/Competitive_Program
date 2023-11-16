#include<stdio.h>
//using namespace std;

int main(){

 int m,n,k,array1[1000],array2[1000],p=0,dis=0,minimum=0,i,j;

 //cin>>n>>m>>k;
 scanf("%d %d %d",&n,&m,&k);
 for(i=0;i<n;i++){
    scanf("%d",&array1[i]);
 }

for(i=0;i<n;i++){
    if(array1>=k && array1!=0){
        dis=(m-(i+1))*10;
        array2[p]=dis;
        p++;
    }
}

for(i=0;i<p;i++){
    if(array2[i]<minimum){
        minimum=array2[i];
    }
}

printf("%d\n",minimum);

return 0;
}
