#include<iostream>
using namespace std;
class Operation
{
private:
    int a,b;
    public:
        int add(int a,int b)
        {
            return a+b;
        }
        double add(double a,double b)
        {
            return a+b;
        }
        string add(string a,string b)
        {
            return a+b;
        }

};
int main()
{
    Operation o1;
    cout<<o1.add("hi","rajkumar")<<endl;
    cout<<o1.add(2.2,2.2)<<endl;
    cout<<o1.add(2,5)<<endl;
}
