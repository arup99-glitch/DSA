#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int a[],int n)
{
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++)
    {
        curSum=curSum+a[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
        if(curSum<0)
        {
            curSum=0;
        }
    }
    return maxSum;

}
int main()
{
    int a[]={1,2,3,-2,5};
    int n= sizeof(a)/sizeof(a[0]);

    int ans = maxSumSubArray(a,n);
    cout<< ans<<endl;
}
