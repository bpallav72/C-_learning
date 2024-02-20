#include <iostream>
using namespace std;
double Area(double l,double b)
{
    double c;
    c=l*b;
    return c;
}
int main()
{
    double a,b;
    char ch = 253;// this is for printing cm² in area
    cout<<"enter Length and Breadth in meters: "<<endl;
    cin>>a>>b;
    cout<<"Area of rectangle: "<<Area(a,b)<<"m"<<ch;
    
    return 0;
}