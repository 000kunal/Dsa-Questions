#include<iostream>
#include<set>
using namespace std;
                      // Sets are a type of associative container in which each element has to be unique because the value
                      // value of the element identifies it. The values are stored in a specific sorted order

int main(){

    set<int>s;

    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(6);

    for(auto i : s){
        cout<<i<<" ";
    }  cout<<endl;

    set<int>:: iterator it = s.begin(); it++;
    s.erase(s.begin());

    for(auto i : s){
        cout<<i<<" ";
    }  cout<<endl;

    cout<<"5 is present or not --> "<<s.count(5)<<endl;

    set<int>:: iterator itr = s.find(5);
    for (auto it = itr; it!= s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


}