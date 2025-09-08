#include<iostream>
#include<string>
#include<math.h>
using namespace std;
// call by value
void hey(int a){
    cout<<"call by value \n";
    cout<<a<<"\n";
    a+=5;
    cout<<a<<"\n";
    a+=5;
    cout<<a<<"\n";
}
// call by reference 
void hello(int &b){ //original copy is sent here and edited 
    cout<<"call by reference \n";
    cout<<b<<"\n";
    b+=50;
    cout<<b<<"\n";
    b+=50;
    cout<<b<<"\n";

}
int main(){
    int a=10;
    hey(a); //it does not send the original 
    cout<<a<<"\n";//sends the copy,,so value 10 will be the orginal
    
    int b=100; //can also woorkwith string 
    hello(b);
    cout<<b<<"\n"; // original copy is printed
    return 0;

}