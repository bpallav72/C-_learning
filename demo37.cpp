#include <iostream>
using namespace std;
bool odd_even()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%2==0)
        return true;
    else
        return false;
}
int main()
{
    //if(odd_even())
    //cout<<"True";
    //else
    //cout<<"false";
    
     if(odd_even())
     {
         cout<<"even";
     }
     else
     {
         cout<<"odd";
     }
    return 0;
}