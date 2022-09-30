#include<iostream>
using namespace std;
float area_circ(int);
float area_circ(int r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    cout<<"Enter radius:";
    cin>>r;
    cout<<area_circ(r);
}
