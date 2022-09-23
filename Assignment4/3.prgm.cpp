#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,t1=-1,t2=1,t3;
    cout<<"how many fibonacci terms u want?";
    cin>>n;
    printf("Following are the %d th term of fibonacci",n);
    for(i=1;i<=n;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        printf("\n%d",t3);
    }
}
