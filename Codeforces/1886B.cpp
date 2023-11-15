#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
int main(){
 int ts;
 cin>>ts;
 while(ts--){
   int px,py,ax,ay,bx,by;
   cin>>px>>py>>ax>>ay>>bx>>by;
   float ap = sqrt(pow(ax-px,2)+pow(ay-py,2));

   float bp = sqrt(pow(bx-px,2)+pow(by-py,2));

   float ab = sqrt(pow(ax-bx,2)+pow(ay-by,2));
   cout<<"ab  "<<ab<<endl;

   float oa = sqrt(ax*ax+ay*ay);
   float ob = sqrt(bx*bx+by*by);

   ap = max(ap,oa);
   bp = max(bp,ob);
   cout<<"ap  "<<ap<<endl;
   cout<<"bp  "<<bp<<endl;

  // float ans =min(ab/2,min(ap,bp));
   float ans =min(ap,bp);
  // if(ab<ans) ans = ab/2;
   printf("%.8f\n",ans);

 }


 return 0;
}

