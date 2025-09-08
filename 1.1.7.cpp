#include<iostream>
#include<string>
#include<math.h>
using namespace std;

// using void with no parameters
void printname() {//void does not return anything
    cout<<"hey raju"<<"\n";// syntax-void functionname

}

//using void with parameters
void printz(string name){
    cout<<" hey"<<name<<"\n";

}

// a 2 numbrs from user and print its sum using fuction
void sum(int a, int b){
    cout<<"addition = "<<a+b<<"\n";
}

//using return function
float sum2(float c, float d){
    // also can do float e = c+d; and then return e
    return c+d;
}

int main(){
    printname();//calling function

    string name;
    cin>>name; //taking input from user
    printz(name);//calling function with parameters

    int a,b;
    cin>>a>>b;
    sum(a,b);

    float c,d;
    cin>>c>>d;
    cout<<"addition 2="<<sum2(c,d);

    return 0;
}

