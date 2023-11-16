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
    if(array1[i]<=k && array1[i]!=0){
        dis=fabs(m -(i+1))*10;   //printf("dis = %d\n",dis);
        array2[p]=dis;
        p++;
    }
}

minimum=array2[0];
for(i=0;i<p;i++){
    if(minimum>array2[i]){
        minimum = array2[i];//printf("min = %d\n",minimum);
    }
}

printf("%d\n",minimum);

return 0;
}
