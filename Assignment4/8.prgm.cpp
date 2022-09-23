#include<iostream>
#include<conio.h>
using namespace std;
void oct_bin(int);
int main()
{
    int n;
    cout<<"Enter any decimal number:";
    cin>>n;
    oct_bin(n);

}
void oct_bin(int n)
{
    if(n>0)
    {
     oct_bin(n/8);
     printf("%d",n%8);
    }
}
