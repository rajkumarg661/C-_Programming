#include<iostream>
using namespace std;
class Operation
{
private:
    int r,l,b;
    int p,q;
    static float pi;
public:
    float area(int r)
    {
        return pi*r*r;
    }
    int area(int a,int b)
    {
        return a*b;
    }

};
float Operation::pi=3.14;
int main()
{
    Operation a1,a2;
    cout<<"Area of circle:"<<a1.area(3);
    cout<<"\nArea of Rectangle:"<<a1.area(2,3);
}

