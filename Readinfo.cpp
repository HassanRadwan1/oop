#include <iostream>
using namespace std;

class clpersoninfo
{

private:
int _Id=10;
long _number;
string _FirstName;
string _LastName;
string _Email;

public:

clpersoninfo(long number,string firstname ,string Lastname  ,string Email ){



_FirstName=firstname;
_LastName=Lastname;
_number=number;
    _Email=Email;

}
 //Just Read Only Id & can't Change it
int GetId()
{
return _Id;
}
void setFIrstname(string firstname)
{
_FirstName=firstname;

}
string getfirstname()
{

return _FirstName;
}
void setLastname(string Lastname)
{
_LastName=Lastname;
}
string getLastName(){
    return _LastName;
}
void setEmail(string Email)
{
    _Email=Email;
}
string GetEmail()
{
    return _Email;
}
string FullName()
{
    return _FirstName+_LastName;
}
void setnumber(long number)
{
    _number=number;
}
int GetNumber()
{
    return _number;
}

void print()
{
cout<<"info:"<<endl;
cout<<"*********************"<<endl;
cout<<"ID     : "<<GetId()<<endl;
cout<<"FirstName: "<<getfirstname()<<endl;
cout<<"LastName: "<<getLastName()<<endl;
cout<<"FullName: "<<FullName()<<endl;
cout<<"Number  :"<<GetNumber()<<endl;
cout<<"Email   : "<<GetEmail()<<endl;
cout<<endl;
cout<<"*********************"<<endl;



}


};



int main()
{



clpersoninfo person1(11,"Hassan" , "Radwan"  , "Hassan***.org");
person1.print();




}               