#include<iostream>
using namespace std;
//type2
void print1(int n)
{
    cout<<"type 2 \n";
    int a,b;
    for(a=0;a<n;a++){ 
        for(b=0;b<=a;b++){
            cout<<a+1;
        }
        cout<<"\n";
    }

}
int  main(){
    int i,j;
    for(i=0;i<5;i++){ 
        for(j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<"\n";
    }
    int n;
    cin>>n;
    print1(n);

    return 0;
}