#include<bits/stdc++.h>
using namespace std;

void reversed(string& str,int i,int j)
{
    //base case
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);

    i++;
     j--;

    //Recursive Call
    reversed(str,i,j);

}

int main()
{
    string name="abcde";
    reversed(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;

}
