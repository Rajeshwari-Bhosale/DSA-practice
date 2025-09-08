#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x; //integer
    cin>>x;
    cout<<" value of integer= "<<x<<"\n";

    long y; //integer but long
    cin>>y;
    cout<<" value of long= "<<y<<"\n";

    long long z; //integer but extra long
    cin>>z;
    cout<<" value of long long= "<<z<<"\n";

    float a; //decimal number
    cin>>a;
    cout<<" value of float= "<<a<<"\n";

    double b; //decimal no. but long
    cin>>b;
    cout<<" value of double= "<<b<<"\n";

    string name; //it picks up anything before space and sepreate string required for after sapce
    cin>>name;
    cout<<" string = "<<name<<"\n";

    getline( cin,name); // it picksup till line is break
    cout<<" getline = hey"<<name<<"\n";

    char c; //can pickup all 256 characters
    cin>>c; 
    cout<<"character= "<<c<<"\n";

    return 0;

}





