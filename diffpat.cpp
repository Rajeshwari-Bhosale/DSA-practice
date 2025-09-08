#include<iostream>
using namespace std;
void pattern(int n){
    int i,j,k;
    for (i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        
        for(k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern1(int n){
    int i,j,k;
    for (i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        
        for(k=0;k<i;k++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern2(int n)
{
    int i,j,k;
    //upper pyramid
     for (i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        
        for(k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
    //lower pyramid
    for (i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        
        for(k=0;k<i;k++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern4(int n){
     int i,j;
     for (i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
       cout<<"\n";
    }
    for (i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
       cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    pattern4(n);
    return 0;
}