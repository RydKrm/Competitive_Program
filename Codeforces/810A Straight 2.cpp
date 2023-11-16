#include<iostream>
using namespace std;
int main()
{
    int n,k,a,i,s=0,sum=0;
    float avg=0.0,avg2=0.0;;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    avg=(float)sum/i;
    avg2=avg;
    for(;;)
    {
        if(avg<(k-.5))
        {
            s++;
            avg=(avg2*i+k*s)/(i+s);
        }
        else
            break;
    }
    cout<<s<<endl;

    return 0;
}
