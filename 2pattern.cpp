#include<iostream>
using namespace std;
void print1(int n){
    cout<<"type 2 \n";
    int a,b;
    for(a=0;a<n;a++){
        for(b=0;b<=a;b++){
            cout<<"#";
        }
        cout<<"\n";
    }

}
int  main(){
    int i,j;
    for(i=0;i<5;i++){ 
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

// type2
int n;
cin>>n;
print1(n);

   return 0;
}