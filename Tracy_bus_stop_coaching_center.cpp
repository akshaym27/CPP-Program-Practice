#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int input[n],output[n];
    for(int i=0;i<n;i++)
        cin>>input[i];

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                output[i-1] = input[i-1] - input[j-1];
        }
    }
    output[0] = input[0];

    for(int i=0;i<n;i++)
        cout<<output[i]<<" ";
    return 0;
}
