#include<iostream>>
using namespace std;
void patter(int n)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
       cout<<"\n";
    }
}
void patter2(int n)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<j<<" ";
        }
       cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    patter2(n);

}