#include<iostream>
using namespace std;
int main()
{
    // for loop
    cout<<"for loop \n";
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"hey "<<i<<"\n";

    }
    cout<<i;

// while loop
cout<<"\n while loop";

 int j=0;   
while(j<5) {
    cout<<"\n hello "<<j;
    j++;
}
cout<<"\n"<<j;

//do while loop
int k=2;
do{ //first do the task then execute
    cout<<"\n do while loop";
    k++;
}while(k<2);
cout<<"\n"<<k;

    return 0;
}

