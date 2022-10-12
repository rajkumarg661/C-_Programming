#include<iostream>
using namespace std;
class complexe
{
private:
    int a,b;
public:
    void set_data(int p,int q)
    {
        a=p;b=q;
    }
    void get_data()
    {
        cout<<a<<" "<<b<<"\n";
    }
    complexe operator+(complexe c)
    {
        complexe tmp;
        tmp.a=a+c.a;
        tmp.b=b+c.b;
        return tmp;
    }
    complexe operator -(complexe c)
    {
        complexe tmp;
        tmp.a=a-c.a;
        tmp.b=b-c.b;
        return tmp;
    }
     complexe operator *(complexe c)
    {
        complexe tmp;
        tmp.a=a*c.a;
        tmp.b=b*c.b;
        return tmp;
    }
    bool operator ==(complexe c)
    {
        if(a==c.a && b==c.b)
            return true;
        else
            return false;
    }
};
int main()
{
    complexe c1,c2,c3,c4,c5;
    c1.set_data(1,8);
    c2.set_data(1,9);
    c3=c1+c2;
    c3.get_data();
    c4=c1-c2;
    c4.get_data();
    c5=c1*c2;
    c5.get_data();
    int v=c1==c2;
    if(v==1)
        cout<<"equal";
    else
        cout<<"not equal";
}
