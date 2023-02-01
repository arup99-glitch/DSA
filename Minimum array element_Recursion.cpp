#include<bits/stdc++.h>
using namespace std;

int findMinEle(int A[],int n)
{
    if(n==1)
        return A[0];
    return min(A[n-1],findMinEle(A,n-1));
}
int main()
{
    int A[]={1,4,45,6,-50,10,2};
    int n = sizeof(A)/sizeof(A[0]);
    int ans=findMinEle(A,n);
    cout<<ans<<endl;
    return 0;
}
