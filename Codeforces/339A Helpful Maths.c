#include<stdio.h>
int main(){

 int i,j,count=0,y;
 char str[100],p;

 scanf("%s",str);

 y=strlen(str); // printf("y = %d\n",y);
if(y==1){

}
else{
 for(i=0;i<y;i=i+2){
        count=0;
    for(j=0;j<=y;j=j+2){      //  printf("j = %d\n",j);
        if(str[j]>str[j+2]){
            count++;            printf("count = %d\n",count);
            p=str[j];           printf("p = %c ",p);printf("\n");
            str[j]=str[j+2];    printf("str = %c ",str[j]);printf("\n");
            str[j+2]= p ;       printf("str[j+2] = %c ",str[j+2]);printf("\n");
        }                       printf("%s\n",str);
    }                           printf("loop again running \n");
    if(count==0){
        break;
    }
 }
}
printf("%s",str);

return 0;
}
