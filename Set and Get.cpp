#include <iostream>
using namespace std;


/*
  Set & Get                                     

Set--> it like Write 
Get--> it like Read 
*/
class clemployee
{

private:
string _Name;
int _age;
int _salary;

public:
//Property Set age
void setage(int age)
{
    _age=age;
}

//Property Get age
int getage(){
    return _age;
}

//Property Set Salary
void setsalary(int salary)
{
    _salary=salary;
}

//Property Get Salary
int getsalary(){
    return _salary;
}


};

int main()
{

clemployee employee1;

employee1.setage(20);
employee1.setsalary(10000);
cout<<"The age of emplyee "<<employee1.getage()<<endl;
cout<<"The salary of him is "<<employee1.getsalary();







}