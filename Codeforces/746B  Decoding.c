#include<stdio.h>
int main(){

 int i,j=0,m=0,p=0,n=0;
 scanf("%d",&n);
 char str1[n-1],str2[n-1];
 scanf("%s",str1);

 m=n-1;
 for(i=n-1;i>=0;i--){ // printf("%s \n",str2);
    if(j%2==0){
        str2[m]=str1[i];
        m--;
    }
    else{
        str2[p]=str1[i];
        p++;
    }
    j++;
 }

for(i=0;i<n;i++){
    printf("%c",str2[i]);
}

 //printf("%s",str2);
return 0;
}
