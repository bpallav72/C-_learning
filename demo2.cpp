#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter any number:-";
    cin>>a;
    if (a==0)
    {
        cout<<"niether odd nor even";
    }
   else if(a%2==0)
    {
        cout<<"even number";
    }
    else{
        cout<<"odd number";
    }
}