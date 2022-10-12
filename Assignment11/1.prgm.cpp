#include<iostream>
using namespace std;
class complexe
{
private:
    int a,b;
public:
    void set_data(int p,int q)
    {
        a=p;
        b=q;
    }
    void show_data()
    {
        cout<<a<<"+"<<b<<"i\n";
    }
    complexe(int p,int q)
    {
        a=p;
        b=q;
    }
    complexe()
    {
        a=0;b=0;
    }
};
int main()
{
    complexe c1,c2(4,5);
    c1.set_data(2,7);
    c1.show_data();
    c2.show_data();
}
