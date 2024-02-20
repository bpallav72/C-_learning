#include <iostream>
using namespace std;
double Area(double r)
{
    return (3.14*r*r);
}
int main()
{
    double a;
    char ch = 253;// this is for printing cm² in area
    cout<<"enter radius in cm: "<<endl<<"";
    cin>>a;
    cout<<"area of circle:- "<<Area(a)<<"cm"<<ch;
    
    return 0;
}