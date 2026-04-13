/*
 * Program Name: Letter Grade Calculator
 * Description: A C++ program that takes a numerical grade (0-100) as input 
 * and uses conditional statements to evaluate and output the equivalent letter grade (A, B, C, or F).
 * Concepts used: If, Else-If, Else conditions, and Logical Operators (&&).
 */
#include <cstdlib> //Just for the cmd / .exe not to turn off automatically
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter ur grade: "<<endl;
    int grade;
    cin>>grade;
if (grade>=0 && grade<=100)
    {
        if (grade >= 90){
            cout<<"A"<<endl;
        }
            
        else if (grade >= 80 && grade <= 89){
            cout<<"B"<<endl;
        }
            
        else if (grade >= 70 && grade <= 79){
            cout<<"C"<<endl;
        }
            
        else{
            cout<<"F"<<endl;
        }
            
    }
else
    cout<<"Invalid grade";

system("pause");//Just for the cmd / .exe not to turn off automatically
return 0;
}
