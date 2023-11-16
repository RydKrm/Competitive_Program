#include<stdio.h>
int main()
{
    float a,r,c,s;
    scanf("%d",&r);
    a=(r+r)*(r+r);
    c=3.1416*r*r;
    s=a-c;
    printf("%0.4f",s);
}
