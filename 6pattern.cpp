#include <iostream>
using namespace std;
void print1(int n){
    cout<<"type 2 \n";
    int a,b;
    for(a=n;a>0;a--){ 
        for(b=0;b<a;b++){
            cout<<b+1;
        }
        cout<<"\n";
    }
}
int main(){
    int i, j;
    for(i = 4; i >= 0; i--){  
        for(j = 0; j <= i; j++){  
            cout <<j+1;  
        }
        cout << "\n";
    }
    int n;
    cin>>n;
    print1(n);
    return 0;
}