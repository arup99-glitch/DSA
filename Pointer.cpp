#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={2,5,6};
    //count the first memory address
    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<"Address of first memory block is : "<<&arr[0]<<endl;
    cout<<"value is: "<<*arr<<endl;
     cout<<"value is: "<<*arr+1<<endl;
      cout<<"value is: "<<*(arr+1)<<endl;
      cout<<"value is: "<<arr[2]<<endl;
      cout<<"value is: "<<*(arr+2)<<endl;
}
