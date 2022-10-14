#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
     char name[30];
     int age;
public:
    void setName(char *n)
    {
        strcpy(name,n);
    }
    void setAge(int a)
    {
        age=a;
    }
    char* getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
class Employee:public Person
{
private:
    int static emp_id;
    double salary;
protected:
    void setSalary(float s)
    {
        salary=s;
    }

public:
    Employee()
    {
        emp_id=emp_id+1;
    }
    void setEmployeeData(char* n,int a,double s)
    {
        setName(n);
        setAge(a);
        setSalary(s);
    }
    void get_EmployeeData()
    {
        cout<<"\nname:"<<(getName())<<"\nage:"<<(getAge())<<"\nsalary:"<<salary;
    }
    int static countEmployee()
    {
        cout<<"\nTotal employee is:"<<emp_id;
    }
};
int Employee::emp_id=0;
int main()
{
    Employee e1,e2,e3;
    e1.setEmployeeData("rajkumar",22,25);
    e1.get_EmployeeData();
    e1.setEmployeeData("abc",22,25);
    e1.get_EmployeeData();
    e1.countEmployee();


}
