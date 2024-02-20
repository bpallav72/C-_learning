#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n,arr[50]; 
    cout<<"enter any number:- ";
    cin>>n;
    cout<<"enter value of n "<<endl;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum;
    return 0;
}