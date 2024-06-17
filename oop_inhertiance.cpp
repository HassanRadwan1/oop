#include <iostream>
using namespace std;

class clsstudent
{
private:


    string _name;
    int _Gpa;
    int _age;
    int _id;

public:

    clsstudent(string name, int age, int Id, int Gpa)
    {
        _name = name;
        _age = age;
        _id = Id;
        _Gpa = Gpa;

    }

    void SetName(string name)
    {
        _name = name;
    }
    string GetName()
    {
        return _name;
    }
    void SetAge(int age)
    {
        _age = age;
    }
    int GetAge()
    {
        return _age;
    }
    void SetId(int id)
    {
        _id = id;
    }
    int GetId()
    {
        return _id;
    }

    void SetGpa(int Gpa)
    {
        _Gpa = Gpa;
    }

    int GetGpa()
    {
        return _Gpa;
    }

    void print()
    {
        cout << "Name  : " << GetName() << endl;
        cout << "Age   : " << GetAge() << endl;
        cout << "id    : " << GetId() << endl;
        cout << "Gpa   : " << GetGpa() << endl;
    }
};
class clsemployee : public clsstudent
{
private:
int _Salary;
string _Experiance;

public:
clsemployee(string name, int age, int Salary , string HasExpericane): clsstudent(name,age,  0, 0)
{

_Salary=Salary;
_Experiance=HasExpericane;

}

void SetSalary(int Salary)
{
    _Salary=Salary;
}
int GetSalary()
{
    return _Salary;
}
void SetExperiance(string Experiance)
{
    _Experiance=Experiance;
}
string GetExperiance()
{
    return _Experiance;
}

    void print()
    {
        cout << "Name      : " << GetName() << endl;
        cout << "Age       : " << GetAge() << endl;
        cout << "Salary    : " << GetSalary() << endl;
        cout << "Experiance: " << GetExperiance() << endl;



    }


};

int main()
{

clsemployee employee1("Ali",35,7000,"Yes");
employee1.print();

}