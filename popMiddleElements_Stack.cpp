#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack,int count,int size)
{
    if(count==size/2)
    {
        inputStack.pop();
        return ;
    }

    int num = inputStack.top();
    inputStack.pop();

    //RECURSIVE CALL
    solve(inputStack,count+1,size);
    inputStack.push(num);
}

int main()
{
    int count=0;
    int N=5;
    stack<int>&inputStack;
    cout<<solve(inputStack,count,N);
}
