
#include<stdio.h>
#include<string.h>

bool canConstruct(char * ransomNote, char * magazine){

    int fg=0,cnt=0;

    for(int i=0;i<strlen(ransomNote);i++){
       if(ransomNote[i]==magazine[i]){
           for(int j=0;j<strlen(ransomNote);j++){
               if(ransomNote[j]==magazine[i+j]){
                   cnt++;
               }
           } if(cnt==strlen(ransomNote)) fg=1;
           cnt=0;
       }

   }
    if(fg==1) return true;
    else false;
}


#include<stdio.h>
#include<string.h>

bool canConstruct(char * ransomNote, char * magazine){

    int fg=0,cnt=0;

    for(int i=0;i<1;i++){
      for(int j=0;j<strlen(magazine);j++){
        if(ransomNote[i]==magazine[j]){
            for(int k=0;k<strlen(ransomNote);k++){
                if(ransomNote[k+i]==magazine[k+j]){
                    cnt++;
                }
            }
            if(cnt==strlen(ransomNote)) fg =1;
                    cnt=0;
            }
        }
   }
    if(fg==1) return true;
    else false;
}
