#include <string>
using namespace std;
#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
private:
    // define this character to receive the equation that the user will enter
    char c1, c2, c3, c4, c5, c6, c7, c8;
    // the numbers that the operations will do on them
    float num1,num2;
public:
    // methods
    Calculator();
    void interface();
    void additoin();
    void subtraction();
    void multiplication();
    void division();
    void reminder();
    void squar();
    void power();
    void absolute();
    void log();
    void Sin();
    void Cos();
    void Tan();
    void reverse_sin();
    void reverse_cos();
    void reverse_tan();
    void factorial();
    void exit();
    void last_answer();
    void clear_the_console();
    ~Calculator();
};

#endif // CALCULATOR_H
