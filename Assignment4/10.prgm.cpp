#include<iostream>
#include<conio.h>
using namespace std;
void oct_bin(int);
int main()
{
 int b,p,sum=1;
 cout<<"Enter base and power";
 cin>>b>>p;
 for(int i=0;i<p;i++)
 {
     sum=sum*b;
 }
 printf("%d",sum);
}
