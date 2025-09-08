#include<iostream>
using namespace std;
void pattern(int n){
    int i,j,k;
    for (i=1;i<=n;i++){
        //star
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        // spaces
        for(j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        // right stars
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    //lower
      for(i=n; i>=1; i--){
        // left stars
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        // spaces
        for(j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        // right stars
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern1(int n){
    int i,j,k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            // print stars only at border
            if(i==1 || i==n || j==1 || j==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void pattern2(int n){
     int size = 2*n - 1; // grid size (rows = cols)
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            
            // find distance from each border
            int top = i - 1;
            int left = j - 1;
            int bottom = size - i;
            int right = size - j;

            int min_dist = min(min(top, bottom), min(left, right));

            cout << n - min_dist << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pattern2(n);
}