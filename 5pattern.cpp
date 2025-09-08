#include<iostream>
using namespace std;
void print1(int n){
    cout<<"type 2 \n";
    int a,b;
    for(a=n;a>=1;a--){ 
        for(b=1;b<=a;b++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int i, j;
    for(i = 5; i >= 1; i--){  // fixed loop condition
        for(j = 1; j <= i; j++){  // standard nested loop for pattern
            cout << "*";  
        }
        cout << "\n";
    }
    int n;
    cin>>n;
    print1(n);
    return 0;
}
