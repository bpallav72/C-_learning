#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cout<<"enter any integer number:- ";
    cin>>n;
    while(i<=n)
    {
        while(i<19)
        {
            if(i==17)
            {
                i=i+1;
                continue;
            }
            cout<<"value of i:"<<i<<endl;
            i++;
        }
    }
}