#include<iostream>
using namespace std;
void pattern(int n) {
    int i, j,k;
    for (i =0 ; i<=n; i++) {
        //space
        for(k=0;k<=n-i-1;k++){
            cout<<" ";
        }
        //alphabet
        char ch = 'A';
        int breakpoint= (2*i+1)/2;
        for (j = 1; j <=2*i+1; j++) {
            cout << ch;
            if(j<=breakpoint)  ch++;
            else ch--;
        }
        //space
        for(k=0;k<=n-i-1;k++){
            cout<<" ";
        }
        cout << "\n";
    }
}
void pattern1(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(char ch='E'-i;ch<='E';ch++){
           
            cout<< ch<<" ";
        }
        cout<<"\n";
    }

}
void pattern2(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        //star
        for(k=0;k<n-i;k++){
           
            cout<< "*";
        }
        //space
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        //star
        for(k=0;k<n-i;k++){
           
            cout<< "*";
        }

        cout<<"\n";
    }
    //lower
    for(i=0;i<n;i++){
        //star
        for(k=0;k<=i;k++){
           
            cout<< "*";
        }
        //space
        for(j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(k=0;k<=i;k++){
           
            cout<< "*";
        }

        cout<<"\n";
    }


}
int main()
{
    int n;
    cin>>n;
    pattern2(n);

}