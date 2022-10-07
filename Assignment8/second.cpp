#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
private:
    int id;
    char name[20];
    float salary;
public:
    void setEmployeeId(int ids)
    {
        id=ids;
    }
    void setEmployeeName(char n[])
    {
        strcpy(name,n);
    }
    void setEmployeeSalary(float s)
    {
        salary=s;
    }
    void getId()
    {
        cout<<id;
    }
    void getname()
    {
        cout<<"\nName:"<<name;
    }
    void getsalary()
    {
        cout<<"\nSalary:"<<salary;
    }
};
int main()
{
    employee e1;
    e1.setEmployeeId(7);
    e1.setEmployeeSalary(2500.25);
    e1.setEmployeeName("rajkumar");
    e1.getId();
    e1.getname();
    e1.getsalary();

}
