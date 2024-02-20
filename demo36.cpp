#include <iostream>
using namespace std;
bool check_prime()
{
    int i,a,f=0;
    cout<<"enter any number: ";
    cin>>a;
    for(i=2;i<=a;i++)
        

    {
        if (a%i==0)
        
         f=1;
         break;
        
    }
    if(f==0)
    cout<<" is a prime number"<<endl;
    else
    cout<<" is not a prime number"<<endl;

}    
int main()
{
    check_prime();
    return 0;
}