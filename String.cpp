#include<bits/stdc++.h>
using namespace std;

bool issubsequence(string s1,string s2)
{
    int n = s1.length(), m= s2.length();
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(s1[i] == s2[j])
            i++;
        j++;
    }
    if(i==n)
    return true;
    else return false;
}

int main()
{
    string s1="gksrekv";
    string s2="geeksforgeeks";
if(issubsequence(s1,s2))
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
