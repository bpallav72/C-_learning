#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cout<<"enter any character(a-z):-";
    cin>>ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"vowel";
    }
    else
    cout<<"consonent";
    return 0;

}
