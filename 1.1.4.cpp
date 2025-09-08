#include<iostream>
using namespace std;

int main()
{
    int day; //day is variable so 

    cin >> day; //user must enter no from 1-7

    switch(day)
    {
        case 1:
         cout<<"monday";
        break; // will not perform further/other conditional loops

        case 2:
         cout<<"tuesday";
        break;

        case 3:
         cout<<"wednesday";
        break;

        case 4:
         cout<<"thursday";
        break;

        case 5:
         cout<<"friday";
        break;

        case 6:
         cout<<"saturady";
        break;

        case 7:
         cout<<"sunday";
        break;

        default:
        cout<<"invalid";
        break;

        cout<<"out of loop";

    }
    return 0;
}