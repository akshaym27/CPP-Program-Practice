#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
            cout<<" ";

        for(int k=i;k>0;k--)
            cout<<k<<" ";

        cout<<"0 ";



        cout<<endl;
    }
    return 0;
}
