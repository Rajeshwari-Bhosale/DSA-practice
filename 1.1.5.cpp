#include<iostream>
#include<string>
using namespace std;

int main(){

    int arr[5]; //5 spaces are created to store nos of same data types
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];//indexing starts from 0
    arr[4]+= 10; 
    cout<<arr[4]<<"\n";

    arr[1]=10;
    cout<<arr[1]<<"\n";

    cout<<arr[3]<<"\n";

    //strings
    string s="hello"; //index starts from 0
    cout<<s[4];
    int len=s.size(); 
    cout<<"\n"<<(len); //normally5
    cout<<"\n"<<(len-1); //5-1=4 is indexing
    cout<<"\n"<< s[len-1]<<"\n";

    s[len]='q';//in string character in ''
    cout<<s[len];

    return 0;
}