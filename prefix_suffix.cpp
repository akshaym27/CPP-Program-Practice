#include<bits/stdc++.h>
using namespace std;
int proper_string(string S)
{
    int n = S.length();

    if(n<2)
        return 0;

    int i = 0;
    int mid = n/2;

    while(mid<n)
    {
        if(S[i]==S[mid])
        {
            i++;
            mid++;
        }
        else if(i==0)
            mid++;
        else
            i--;
    }
    return i;
}
int main()
{
    string s;
    cin>>s;
    cout<<proper_string(s);
    return 0;
}
