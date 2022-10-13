#include<iostream>
using namespace std;
void addition(int a, int b)//a and b are formal parameters or copies of main function//
{
    cout<<a+b<<endl;
}
void subtraction(int a, int b)
{
    cout<<a-b<<endl;
}
void multiplication(int a, int b)
{
    cout<<a*b<<endl;
}
void division(int a, int b)
{
    cout<<a/b<<endl;
}
void remain(int a, int b)
{
    cout<<a%b<<endl;
}


int main()
{
    int i,j;//i and j are actual parameters which provide actual values for the main function as i=a and j=b//
    cout<<"Enter first number: ";
    cin>>i;
    cout<<"Enter second number: ";
    cin>>j;
    addition(i,j);
    subtraction(i,j);
    multiplication(i,j);
    division(i,j);
    remain(i,j);
    return 0;
}