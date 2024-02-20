#include<iostream>
#include<string>
using namespace std;
int main()
{
    char question1[] = "What is your name? ";
    string question2 = "Where do you live? ";
    char answer1[50];
    string answer2;
    cout <<question1<<endl;
    cin >> answer1;
    cout <<question2<<endl;
    cin >> answer2;
    cout <<"Hello,"<<answer1<< " from "<< answer2;
    return 0;

}