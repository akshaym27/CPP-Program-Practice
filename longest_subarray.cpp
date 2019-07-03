#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,20,3,10,5};
    int sum = 33;
    int cur_sum = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;

    for(int i=0;i<=n;i++)
    {
        while(cur_sum > sum && start < i-1)
        {
            cur_sum = cur_sum - arr[start];
            start++;
        }

        if(cur_sum==sum)
            cout<<"Subarray find between index "<<start<<" and "<<i-1;

        if(i<n)
            cur_sum = cur_sum + arr[i];
    }
    return 0;
}
