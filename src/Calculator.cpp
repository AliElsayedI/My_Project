#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
#include "Calculator.h"

Calculator::Calculator(): c1{' '}, c2{' '}, c3{' '}, c4{' '}, c5{' '}, c6{' '}, c7{' '}, c8{' '}, num1{0.0}, num2{0.0}
{

}
void Calculator::interface()
{
    cout<<"\t\t\t---------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t|          Welcome in        |         \"Calculator\"         |         Program         |"<<endl;
    cout<<"\t\t\t|-------------------------------------------------------------------------------------|"<<endl;
    cout<<"\t\t\t| (NOTE (1)): That is the actions that our calculator can do.                         |"<<endl;
    cout<<"\t\t\t| (NOTE (2)): Write the action as it determined.                                      |"<<endl;
    cout<<"\t\t\t| 1.addition -> x+y              2.subtraction -> x-y         3.multiplication -> x*y |"<<endl;
    cout<<"\t\t\t| 4.division -> x/y              5.Remainder -> x%y           6.square root -> sqrt(x)|"<<endl;
    cout<<"\t\t\t| 7.power -> pow(x,y)            8.absolute value -> abs(x)   9.log -> log(x)         |"<<endl;
    cout<<"\t\t\t| 10.sin -> sin(x)               11.cos -> cos(x)             12.tan -> tan(x)        |"<<endl;
    cout<<"\t\t\t| 13.sin^-1 -> sin^-1(x)         14.cos^-1 -> cos^-1(x)       15.tan^-1 -> tan^-1(x)  |"<<endl;
    cout<<"\t\t\t| 16.factorial -> fact(x)        17.Exit                      18.Ans                  |"<<endl;
    cout<<"\t\t\t| 19.Clear the screen                                                                 |"<<endl;
    cout<<"\t\t\t---------------------------------------------------------------------------------------"<<endl;
}
void Calculator::additoin()
{
    cout<<"Enter your equation : "; cin>>num1>>c1>>num2;
    if(c1!='+')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The addition = "<<num1+num2<<endl;
    // here we store the result in file so the user can get it if it is the last action he do and so on in other cases ....
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << num1+num2<<endl;
    file.close();
}
void Calculator::subtraction()
{
    cout<<"Enter your equation : "; cin>>num1>>c1>>num2;
    if(c1!='-')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The subtraction = "<<num1-num2<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << num1-num2<<endl;
    file.close();
}
void Calculator::multiplication()
{
    cout<<"Enter your equation : "; cin>>num1>>c1>>num2;
    if(c1!='*')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The multiplication = "<<num1*num2<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << num1*num2<<endl;
    file.close();
}
void Calculator::division()
{
    cout<<"Enter your equation : "; cin>>num1>>c1>>num2;
    if(c1!='/')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    // here we handle the division by zero error
    if(num2==0)
    {
        cout<<"Math ERROR -Denominator can not equal 0-"<<endl;
    }
    else
    {
        cout<<"The division = "<<num1/num2<<endl;
        fstream file;
        file.open("Last_answer.txt",ios::out);
        file << num1/num2<<endl;
        file.close();
    }
}
void Calculator::reminder()
{
    cout<<"Enter your equation : "; cin>>num1>>c1>>num2;
    if(c1!='%')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The Remainder = "<<(int)num1%(int)num2<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << (int)num1%(int)num2<<endl;
    file.close();
}
void Calculator::squar()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>c5>>num1>>c6;
    if(c1!='s' || c2!='q' || c3!='r' || c4!='t' || c5!='(' || c6!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The Sqrt = "<<sqrt(num1)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << sqrt(num1)<<endl;
    file.close();
}
void Calculator::power()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5>>num2>>c6;
    if(c1!='p' || c2!='o' || c3!='w' || c4!='(' || c5!=',' || c6!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The result = "<<pow(num1,num2)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << pow(num1,num2)<<endl;
    file.close();
}
void Calculator::absolute()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5;
    if(c1!='a' || c2!='b' || c3!='s' || c4!='(' || c5!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The abstract = "<<abs(num1)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << abs(num1)<<endl;
    file.close();
}
void Calculator::log()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5;
    if(c1!='l' || c2!='o' || c3!='g' || c4!='(' || c5!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The log = "<<log10(num1)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << log10(num1)<<endl;
    file.close();
}
void Calculator::Sin()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5;
    if(c1!='s' || c2!='i' || c3!='n' || c4!='(' || c5!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    //When using sin, C++ outputs the result in a measurement called radians, and we convert it to a circular measurement
    cout<<"The sin = "<<sin(num1*3.14159265359/180)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << sin(num1*3.14159265359/180)<<endl;
    file.close();
}
void Calculator::Cos()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5;
    if(c1!='c' || c2!='o' || c3!='s' || c4!='(' || c5!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The cos = "<<cos(num1*3.14159265359/180)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << cos(num1*3.14159265359/180)<<endl;
    file.close();
}
void Calculator::Tan()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>num1>>c5;
    if(c1!='t' || c2!='a' || c3!='n' || c4!='(' || c5!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The tan = "<<tan(num1*3.14159265359/180)<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << tan(num1*3.14159265359/180)<<endl;
    file.close();
}
void Calculator::reverse_sin()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>num1>>c8;
    if(c1!='s' || c2!='i' || c3!='n' || c4!='^' || c5!='-' || c6!='1' || c7!='(' || c8!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    // go to note in line 153, but we reverse the law as it the reverse of sin
    cout<<"The sin^-1 = "<<(asin(num1))*180/3.14159265359<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << (asin(num1))*180/3.14159265359<<endl;
    file.close();
}
void Calculator::reverse_cos()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>num1>>c8;
    if(c1!='c' || c2!='o' || c3!='s' || c4!='^' || c5!='-' || c6!='1' || c7!='(' || c8!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The cos^-1 = "<<(acos(num1))*180/3.14159265359<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << (acos(num1))*180/3.14159265359<<endl;
    file.close();
}
void Calculator::reverse_tan()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>num1>>c8;
    if(c1!='t' || c2!='a' || c3!='n' || c4!='^' || c5!='-' || c6!='1' || c7!='(' || c8!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    cout<<"The tan^-1 = "<<(atan(num1))*180/3.14159265359<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << (atan(num1))*180/3.14159265359<<endl;
    file.close();
}
void Calculator::factorial()
{
    cout<<"Enter your equation : "; cin>>c1>>c2>>c3>>c4>>c5>>num1>>c6;
    if(c1!='f' || c2!='a' || c3!='c' || c4!='t' || c5!='(' || c6!=')')
    {
        cout<<"Error operand please, try again"<<endl;
        return;
    }
    double fact = 1;
    for(double i=1; i<=num1; i++)
    fact =fact*i;
    cout<<"The Factorial = "<<fact<<endl;
    fstream file;
    file.open("Last_answer.txt",ios::out);
    file << fact<<endl;
    file.close();

}
void Calculator::exit()
{
    cout<<"Program Ended (^_^)"<<endl;
}
void Calculator::last_answer()
{
    fstream file;
    file.open("Last_answer.txt", ios::in);
    string s= "";
    getline(file, s);
    cout<<"The last result = "<< s<<endl;
    file.close();
}
void Calculator::clear_the_console()
{
    system("cls");
}
Calculator::~Calculator()
{

}
