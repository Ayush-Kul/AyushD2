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
    cout<<"Enter the second value"<<endl;
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
}};
int main()
{
calculator c1;
int ch;

cout<<"Enter your choice from menu \n 1.For Addition \n 2. For Subtraction \n 3.For Multiplication \n 4.For Division"<<endl;
cin>>ch;

switch(ch)
{
case 1:
cout<<"Addition of two nos: "<<endl;
c1.add();
break;

case 2:
cout<<"Subtraction of two nos: "<<endl;
c1.sub();
break;

case 3:
cout<<"Multiplication of two nos: "<<endl;
c1.mul();
break;

case 4:
cout<<"Division of two nos: "<<endl;
c1.div();
break;
}
}