#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Arup");
    q.push("Chakra");
    q.push("Borty");

    cout<<"Size before pop: "<<q.size()<<endl;
    cout<<"First Elements: "<<q.front()<<endl;
    q.pop();
    cout<<"First Elements: "<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;
}
