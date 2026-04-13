/*
 * Program Name: Minutes to Hours Converter
 * Description: A simple C++ program that takes a total number of minutes 
 * as input and converts it into the equivalent hours and remaining minutes.
 * (For example: 130 minutes = 2 hours and 10 minutes).
 * Concepts used: Variables, Division (/), and Modulo (%) operators.
 */

#include <cstdlib> //Just for the cmd / .exe not to turn off automatically
#include <iostream>
using namespace std;
int main()
{
    int hours,minutes,remaining_minutes;
    cout<<"Enter total Minutes: "<<endl;
    cin>>minutes;
    // hours = given minutes divided 60 minutes
    hours= minutes/60;
    remaining_minutes= minutes%60;
    cout<< hours << " hours and "<< remaining_minutes <<" minutes"<<endl; 
    
system("pause");//Just for the cmd / .exe not to turn off automatically
return 0;
}
