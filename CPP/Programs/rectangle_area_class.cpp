#include <cstdlib> //Just for the cmd / .exe not to turn off automatically
#include <iostream>
using namespace std;
   
class Rectangle
{
    private:
        double length , width;

    public:
    Rectangle(double l , double w){
        length = l;
        width= w;
    }
        double getArea()
        {
            return length * width;
        }
};

int main()
{
   double length1 , width2;

    cout<<"enter length: "<<endl;
    cin>>length1;

    cout<<"enter width: "<<endl;
    cin>>width2;

    Rectangle myrect(length1,width2);
    cout<<"Rectangle = "<<myrect.getArea()<<endl;

system("pause");//Just for the cmd / .exe not to turn off automatically
return 0; 
}

