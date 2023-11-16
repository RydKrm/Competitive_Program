#include<stdio.h>
#include<string.h>

int numJewelsInStones(char * J, char * S){

    int i,j,cnt=0;
    for(i=0;i<strlen(J);i++){
     for(j=0;j<strlen(S);j++){
      if(J[i]==S[j]) {
      cnt++;
      }
    }
  }
 printf("%d\n",cnt);
}

  int main(){
    char J[100],S[100];
    scanf("%s%s",J,S);
    numJewelsInStones(J,S);

   return 0;
}
