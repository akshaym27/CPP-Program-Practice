/*


*/

#include<bits/stdc++.h>
using namespace std;
int Sparse_Number(long long N)
{
    int ans = 0;
    long long current;
    long long prev;
    while(N!=0)
    {
        current = N%2;
        if(current==1 && prev==1)
        {
            ans = 1;
            return ans;
        }

        prev = current;
        N = N/2;
    }
    return ans;
}
int main()
{
    long long N;
    cin>>N;
    cout<<Sparse_Number(N);
    return 0;
}
