#include<stdio.h>
int main()
{
    int a,b,s,d;

    scanf("%d %d",&a,&b);
    if(a>b)
        d=b;
    else
        d=a;

    if(a>b)
        s=a-b;
      else
        s=b-a;
        s=s/2;

      printf("%d %d\n",d,s);

      return 0;
}
