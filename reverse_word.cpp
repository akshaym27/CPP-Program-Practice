#include<iostream>
using namespace std;
int main()
{
    string str = "i like this program very much";
    string s[50];
    int j = 0;
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
            j++;
        else
            s[j] = s[j] + str[i];
    }

    for(int i=j;i>=0;i--)
        cout<<s[i]<<" ";

    return 0;
}
