#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    //base Case
    if(size==0)return false;
    if(arr[0]==key)return true;
    else{
        bool remainPart = linearSearch(arr+1,size-1,key);
        return remainPart;
    }
}
int main()
{
    int arr[5]={3,5,1,2,6};
    int size = 5;
    int key = 7;

    bool ans = linearSearch(arr,size,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"ABsent"<<endl;
    }
}
