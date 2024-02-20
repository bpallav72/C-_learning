#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"enter any ten integer number:- ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"given numbers are:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}