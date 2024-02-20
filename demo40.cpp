#include <iostream>
using namespace std;
int numberpattern()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}
int main()
{
  numberpattern();  
    return 0;
}