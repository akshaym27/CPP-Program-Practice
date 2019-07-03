#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {16,19,4,3,8,3};
    int a[100];
    int k = 0;
    bool flag = false;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]<arr[j])
                break;

            if(j==5)
            {
                a[k] = arr[i];
                k++;
            }
        }
    }

    a[k++] = arr[5];
    for(int i=0;i<k;i++)
        cout<<a[i]<<" ";
    return 0;
}
