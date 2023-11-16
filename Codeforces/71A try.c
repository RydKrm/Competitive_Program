#include<stdio.h>
#include<string.h>
int main()
{
int i,n,p,q,x;
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a);
p=strlen(a);
if(p<=10){
 printf("%s\n",a);
 }
else if(p>10) {
q=p-2;
printf("%c%d%c\n",a[0],q,a[p-1]);
}
}
return 0;
}

