#include <iostream>
using namespace std;
class calculator
{
int a,b;
void add(){
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the second value"<<enld;
    cin>>b;
    int addn=a+b;
    cout<<"The sum of two numbers is"<<addn<<endl;
    }
void sub()
{
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the second value"<<enld;
    cin>>b;
    int subn=a-b;
    cout<<"The difference of two numbers is"<<subn<<endl;}
void mul(){
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the second value"<<enld;
    cin>>b;
    int mul=a*b;
    cout<<"The product of two numbers is"<<mult<<endl;
    }
void div()
{
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the second value non zero number please"<<enld;
    cin>>b;
    int div=a/b;
    cout<<"The div of two numbers is"<<div<<endl;
}}