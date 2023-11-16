#include<stdio.h>
int main()
{
    int i,n,a=0,d=0;
    char str[1000000];
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0;i<n;i++){
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        printf("Anton\n");
    else if(a<d)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}
