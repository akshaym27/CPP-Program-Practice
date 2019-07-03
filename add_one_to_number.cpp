#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> plusOne(vector<int> &A) {
    int n = A.size(),i,j=n;
    vector<int> B;
    int temp = A[0],ans;
    long res;
    for(i=0;i<n;i++)
    {
        res+=A[i]*pow(10,j);
        j--;
    }

    res = res + temp;
    j = n;
    for(i=0;i<n;i++)
    {
        ans = res/pow(10,j);
        j--;
        B[i] = ans;
        ans = 0;
    }

    return B;
}
int main()
{
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    vector<int> B = plusOne(A);
    for(int i=0;i<B.size();i++)
        cout<<B[i]<<" ";
    return 0;
}
