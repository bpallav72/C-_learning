#include <iostream>
using namespace std;

int main()
{
    int n,a[45],mul=1;
    cout<<"enter any integer number: ";
    cin>>n;
    cout<<"enter value of n"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=n;j++)
    {
        mul=mul*a[j];
    }
    cout<<"mul="<<mul;
    
    return 0;
}