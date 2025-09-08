#include<iostream> // many examples of contional statements so others are written down
using namespace std;
// enter age of a person and identify if he is child or adult
int main()
{
    int age;
    cin>>age;
    cout<<" age = "<<age;

    if(age<=18) //if condition satisfied then if block executes
    {
        cout<<" he is a child ";
    }
    else  //otherwise else
    {
        cout<<" he is an adult ";
    }

    return 0;

}