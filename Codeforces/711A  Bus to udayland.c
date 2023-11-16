#include<stdio.h>
int main(){
  int i,j,m,n,count=0;
  char str[100][100];
  scanf("%d",&n);

  //SCAN START HERE
   //for(i=0;i<n;i++){
    //for(j=0;j<5;j++){

   // }
  // }

   //DETECTED START HERE
  for(i=0;i<n;i++){
        scanf("%s",&str);
    //for(j=0;j<5;j++){
        if(str[i][j]=="X" && str[i][j+1]=="X"){
            n=i;
            m=j;
            count=1;
        }
    //}
  }

   //PRINT START HERE

  if(count==0){
    printf("NO \n");
    for(i=0;i<n;i++){
      for(j=0;j<5;j++){
        printf("%d",str[i][j]);
    }
    printf("\n");
   }
  }
  else
     for(i=0;i<n;i++){
    for(j=0;j<5;j++){
      if(i==n && j==m){
        printf("++");
        j=j+1;
      }
    }
   }


return 0;
}
