#include <iostream>
#include "Calculator.h"
using namespace std;


int main()
{
     // the design of calculator
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
    Calculator obj;
    while(true)
    {
      float number_of_action;
      cout<<"Enter the Number of the action you need: "; cin>>number_of_action;
       // this if for checking if the number is possible or not and it stop the program form going in infinite loop
       if(number_of_action!=1 && number_of_action!=2 && number_of_action!=3 && number_of_action!=4
          && number_of_action!=5 && number_of_action!=6 && number_of_action!=7 && number_of_action!=8
          && number_of_action!=9 && number_of_action!=10 && number_of_action!=11 && number_of_action!=12
          && number_of_action!=13 && number_of_action!=14 && number_of_action!=15
          && number_of_action!=16 && number_of_action!=17 && number_of_action!=18 && number_of_action!=19)
       {
           cout<<"Invalid Number!\nPlease, choose within the Range (^_^)"<<endl;
           break;
       }
      switch((int)number_of_action)
      {
        case 1:
            obj.additoin();
            break;
        case 2:
            obj.subtraction();
            break;
        case 3:
            obj.multiplication();
            break;
        case 4:
            obj.division();
            break;
        case 5:
            obj.reminder();
            break;
        case 6:
            obj.squar();
            break;
        case 7:
            obj.power();
            break;
        case 8:
            obj.absolute();
            break;
        case 9:
            obj.log();
            break;
        case 10:
            obj.Sin();
            break;
        case 11:
            obj.Cos();
            break;
        case 12:
            obj.Tan();
            break;
        case 13:
            obj.reverse_sin();
            break;
        case 14:
            obj.reverse_cos();
            break;
        case 15:
            obj.reverse_tan();
            break;
        case 16:
            obj.factorial();
            break;
        case 17:
            obj.exit();
            break;
        case 18:
            obj.last_answer();
            break;
        case 19:
            obj.clear_the_console();
            obj.interface();
            break;
      }
      if(number_of_action==17)
          break;
    }
    return 0;
}
