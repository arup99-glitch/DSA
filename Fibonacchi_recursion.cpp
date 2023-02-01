#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    int s=fibo(n-1)+fibo(n-2);
    return s;
}

int main()
{
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans<<endl;
    return 0;
}
