#include <iostream>
using namespace std;
int numberpattern()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
  numberpattern();  
    return 0;
}