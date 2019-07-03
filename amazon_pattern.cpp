#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x = 2*n-1;
    int t = x - 1;
    int a[x][x];
    for(int i=0;i<=x/2;i++)
    {
        for(int j=i;j<x-i;j++)
        {
            a[i][j] = n;
            a[j][i] = n;
            a[t][j] = n;
            a[j][t] = n;
        }
        t--;
        n--;
    }

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
