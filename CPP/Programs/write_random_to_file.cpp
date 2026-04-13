/*
 * Program Name: Random Number File Writer
 * Description: A C++ program that generates a random number using a fixed seed 
 * and writes that number into an external text file named "data.txt".
 * Concepts used: Random number generation (rand, srand) and File I/O (ofstream).
 */
#include <cstdlib> //Just for the cmd / .exe not to turn off automatically
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
    srand(10);
    int rndm = rand();
    ofstream outfile("data.txt");
    outfile<<rndm<<endl;
    outfile.close();
    
system("pause");//Just for the cmd / .exe not to turn off automatically
return 0;
}
