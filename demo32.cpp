#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter any number- ";
    cin>>a;
    cout<<&a<<endl;
    int *p=&a;
    cout<<p;
    return 0;
}