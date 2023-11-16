#include<stdio.h>
int main()

{
 int array1[100][100],array2[100],n,i,j,s=0,p=0;
scanf("%d",&n);
 for(i=0;i<n;i++){
        for(j=0;j<3;j++){
    scanf("%d",&array1[i][j]);
   }
 }
 /*
for(j=0;j<n;j++){
        s=0;
p=0;*/

 for(i=0;i<array1[i][2];i++){
        s=p;
     s = s+array1[i][0];
     p = s-array1[i][1];
     printf("s= %d\n",p);
   /*
     if(array1[i][2]%2==1){
        s=s+array1[i][0];}*/


     array2[i]=s;

   }

for(i=0;i<n;i++){
 printf("%d\n",array2[i]);
    }

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    short q;
    int a, b, k;
    cin >> q;
    while (q--) {
        cin >> a >> b >> k;
        cout << 1LL*a*((k+1)/2)-1LL*b*(k/2) << endl;
    }
    return 0;
}
