#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p=&a;
    cout<<"enter any number- ";
    cin>>a;
    cout<<p<<endl;
    cout<<*p; 

    return 0;
}