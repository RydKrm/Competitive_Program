#include<stdio.h>
int main()
{
    int n=0,i=0,p=0;
    char str[30];
    str1[30]="",str2[30]="cube",str3[30]="octahedron",
         str4[30]="dodecadron",str5[30]="iconsahedron" ;

         scanf("%d",&p);


    for(i=0;i<p;i++){
        scanf("%s",str);
        if(str==str2'Tetrahefron'){
            n=n+4;
        }
        else if(str=='Tube'){
            n=n+6;}
        else if(str=='Octahedron'){
            n=n+8;}
        else if(str=='Dodecadron'){
            n=n+12;}
        else if(str=='Iconsahedron'){
            n=n+20;}
        else
            n=n+1;
    }

    printf("%d\n",n);

    return 0;

}
