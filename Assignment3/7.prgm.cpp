#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"enter number upto which u want sum of square of the numbers:";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    cout<<"total sum upto "<<n<<" number is "<<sum;
}



