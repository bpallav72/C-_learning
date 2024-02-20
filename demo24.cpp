#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    cout<<"enter any number: "<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered Numbers are: "<<endl;
    for(int j=0;j<7;j++)
    {
        cout<<arr[j]<<",";
    }
    return 0;
}