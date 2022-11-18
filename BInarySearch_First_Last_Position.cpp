#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int key)//n means size
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;//FINDING THE FIRST OCCURANCE IF IT IS FIND BEFORE MID
        }
        else if(key>arr[mid])//GO TO RIGHT
        {
            s=mid+1;
        }
         else if(key<arr[mid])//GOT TO LEFT
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key)//n means size
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;//FINDING THE SECOND OCCURANCE IF IT IS FIND AFTER MID
        }
        else if(key>arr[mid])//GO TO RIGHT
        {
            s=mid+1;
        }
         else if(key<arr[mid])//GO TO LEFT
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int even[11]={1,2,3,3,3,3,3,3,3,3,3};
    cout<<"First Occurance of 3 is at index" <<firstOcc(even,11,3)<<endl;
    cout<<"Last Occurance of 3 is at Index" <<lastOcc(even,11,3)<<endl;
}
