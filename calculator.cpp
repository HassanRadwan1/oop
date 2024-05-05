#include <iostream>
using namespace std;

class clcalculator
{

private:
float _Result=0;
float _LastNumber=0;
string _Lastoperation;

public:

void Add(float number)
{
_Lastoperation="Adding";
_LastNumber=number;
_Result+=number;
}

void Subtraction(float number)
{
_Lastoperation="Subtraction";
_LastNumber=number;
_Result-=number;

}


void multiplication(float number)
{
_Lastoperation="multiplication";
_LastNumber=number;
_Result*=number;
}

void Divide(float number)
{
_Lastoperation="Divide";
_LastNumber=number;
_Result/=number;
}

void CLear()
{
    _LastNumber=0;
    _Lastoperation="Clear";
    _Result=0;
}

void PrintResult()
{

cout<<"Result After "<<_Lastoperation<<" "<<_LastNumber<<" is: "<<_Result<<endl;

}


};

int main()
{

clcalculator calculator;

calculator.Add(10);
calculator.PrintResult();
calculator.Add(100);
calculator.PrintResult();
calculator.Subtraction(20);
calculator.PrintResult();

}