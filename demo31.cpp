#include <iostream>
using namespace std;

int main()
{
    int n,a[54];
    int sub=0;
    cout<<"enter any integer number: ";
    cin>>n;
    cout<<"enter value of n"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        sub=sub-a[j];
    }
    cout<<"sub= "<<sub;
    return 0;
}