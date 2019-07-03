#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c = n + 64 ;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<(char)c<<" ";
        }
        c--;
        cout<<endl;
    }
    return 0;
}
