#include<iostream>
using namespace std;
void pattern(int n){
    int i,j;
    int star=1;
    for(i=0;i<=n;i++)
    {
        if (i % 2 == 0) star=1;
        else star=0;
        for(j=0;j<=i;j++){
            cout<<star;
            star=1-star;
        }
        cout<<"\n";
    }
}
void pattern1(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
void pattern2(int n){
    int i,j;
    int number=1;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<number<<" " ;
            number=number+1;
        }
        cout<<"\n";
    }
}
void pattern3(int n){
    int i,j,k;
    for(i=1;i<=n;i++){
        //number 
        for(k=1;k<=i;k++){
            cout<<k;
        }
        //space
        for(j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        //number
        for(k=i;k>=1;k--){
            cout<<k;
        }
        cout<<"\n";
    }
}
void pattern4(int n){
    int i,j;
    for(i=0;i<=n;i++){
        char ch='A';
        for (j=0;j<=i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<"\n";
    }
}
void pattern5(int n){
    int i,j;
     char ch='A';
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<ch;}
        cout<<"\n";
         ch=ch+1;
        }
         
    }
void pattern6(int n){
    int i,j;
     char ch='A';
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i+1;j++){
            cout<<ch;
            
        }
        ch=ch+1;
        cout<<"\n";
         
        }
         
    }
void pattern7(int n) {
    int i, j;
    for (i =1 ; i<=n; i++) {
        char ch = 'A';
        for (j = 1; j <=n-i+1; j++) {
            cout << ch;
            ch = ch + 1;  
        }
        cout << "\n";
    }
}

    int main()
{
    int n;
    cin>>n;
    pattern7(n);

}