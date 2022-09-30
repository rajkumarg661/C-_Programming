#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int factorial(int n)
{
    int fact=1;
    while(n>0)
    {

        fact=fact*n;
        n--;
    }
    return fact;

}
int main()
{
    cout<<factorial(5);
}
