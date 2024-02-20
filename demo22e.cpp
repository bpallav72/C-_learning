#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        {
            for(int k=7;k>=i*2-1;k--)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}