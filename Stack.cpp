#include<bits//stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Arup");
    s.push("Chakraborty");
    s.push("Borty");

    cout<<"Top Elements: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Elements: "<<s.top()<<endl;
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
}
