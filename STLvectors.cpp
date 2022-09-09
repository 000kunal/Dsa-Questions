#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>a(5,1);  // Direct intialization of vector
    cout<<"printing element : ";
    for(int i : a){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
    cout<<"Size of vector is : "<<v.size()<<endl;

    cout<<"Element at 2nd index : "<<v.at(2)<<endl;

    cout<<"front : "<<v.front()<<endl;
    cout<<"Back : "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i : v){
        cout<<i<<" ";
    } cout<<endl;

   v.pop_back();

   cout<<"After pop "<<endl;
   for(int i : v){
    cout<<i<<" ";
   } cout<<endl;

   cout<<"before clear size "<<v.size()<<endl;
   v.clear();
   cout<<"After clear size "<<v.size()<<endl;
}