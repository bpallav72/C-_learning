#include <iostream>
using namespace std;
int numpat(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    cout<<"enter pattern raw num: "<<endl;
    cin>>a;
    numpat(a);   
    return 0;
}