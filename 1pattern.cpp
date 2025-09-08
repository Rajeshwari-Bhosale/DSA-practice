#include<iostream>
using namespace std;
void printpatt(int n){
    cout << "type2 \n";
    int a, b;
    for(a = 0; a < n; a++) // for number of rows
    {
        for(b = 0; b < n; b++) // for number of columns
        {
            cout << "*" << " ";
        }
        cout << "\n"; // Move to next line after printing stars
    }
}

int main()
{
    int i, j;
    for(i = 0; i < 5; i++) // pattern 1
    {
        for(j = 0; j < 5; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }

    // type 2
    int n; 
    cin>>n;
    printpatt(n); 
    return 0;
}
