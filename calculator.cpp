#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
int main()
{
    char op;
    double num1;
    double num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"Enter Operator (+ , - , *, /)"<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<(num1 + num2);
        break;
    case '-':
        cout<<num1<<"-"<<num2<<"="<<(num1 - num2);
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<(num1*num2);
        break;
    case'/':
        if(num2 !=0) cout<<num1<<"/"<<num2<<"="<<(num1 / num2);
        else cout<<"Math Error!"<<endl;
        break;
    default:
        cout<<"Invalid operator";
        break;
    }

   return 0;
}

