#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity=>"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity=>"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity=>"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity=>"<<v.capacity()<<endl;
    cout<<"size=>"<<v.size()<<endl;

    cout<<"Element at 2nd inbox=>"<<v.at(2)<<endl;
    cout<<"font=> "<<v.front()<<endl;
    cout<<"back=>"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size=>"<<v.size()<<endl;
}
