#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "babbar";

    stack<char> s;

    for(int i=0;i<str.length();i++)
    {


        char ch = str[i];
        s.push(ch);
        cout<<s<<endl;
}

string ans = "";
while(!s.empty())
{
    char ch = s.top();
    ans.push_back(ch);
    s.pop();
}
cout<<ans<<endl;
}
