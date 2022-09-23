#include<iostream>
#include<conio.h>
using namespace std;
void bin_dec(int);
int main()
{
    int n;
    cout<<"Enter any decimal number:";
    cin>>n;
    bin_dec(n);

}
void bin_dec(int n)
{
    if(n>0)
    {
     bin_dec(n/2);
     printf("%d",n%2);
    }
}
