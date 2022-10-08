#include<iostream>
using namespace std;
class complexe
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;b=y;
    }
    void get_data()
    {
        cout<<"\n"<<a<<"+"<<b<<"i";
    }
    complexe add(complexe c)
    {
        complexe temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complexe subtraction(complexe c)
    {
        complexe temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    complexe into(complexe c)
    {
        complexe temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }

};
int main()
{
    complexe c1,c2,c3,c4;
    c1.set_data(2,8);
    c2.set_data(5,4);
    c3=c1.add(c2);
    c3.get_data();
    c4=c1.subtraction(c2);
    c4.get_data();
    c3=c1.into(c2);
    c3.get_data();

}
