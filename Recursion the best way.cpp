#include<iostream>
using namespace std;

int power(int n){
 //base case
 if(n==0)return 1;

 //recursive relation

 int smallerPrb=power(n-1);
 int biggerPrb=2*smallerPrb;
 return biggerPrb;
}

int main()
{
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}
