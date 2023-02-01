#include<bits/stdc++.h>
using namespace std;

int fibo(int arr[],int n)
{
    int c=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=arr[i+1]){
        c++;
       }
   }
   return c++;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int d=fibo(arr,n);
    cout<<d<<endl;
    return 0;
}
