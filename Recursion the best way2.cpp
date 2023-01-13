#include<iostream>
using namespace std;

int power(int n){
 //base case
 if(n==0){
        return 0;
 }

 //recursive relation

 cout<<n<<endl;
 power(n-1);
}

int main()
{
    int n;
    cin>>n;
    power(n);

    return 0;
}
