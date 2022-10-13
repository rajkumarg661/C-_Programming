#include<iostream>
using namespace std;
class complexe
{
private:
    int a,b;
public:
    void setdata(int p,int q)
    {
        a=p;
        b=q;
    }
    void getdata()
    {
        cout<<a<<" "<<b;
    }
    complexe operator-()
    {
        complexe tmp;
        tmp.a=-a;
        tmp.b=-b;
        return tmp;
    }
    complexe operator++()
    {
        complexe tmp;
        tmp.a=a++;
        tmp.b=b++;
        return tmp;
    }

};
int main()
{
    complexe c1,c2,c3;
    c1.setdata(2,3);
    c2=-c1;
    c2.getdata();


}
