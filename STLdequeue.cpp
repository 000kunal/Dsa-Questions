#include<iostream>
#include<deque>
using namespace std;

int main()
{
  deque<int>d;

  d.push_back(1);
  d.push_front(2);  // in this we can insert and delete element from both the ends

 // cout<<"Before pop "<<endl;
 // for(int i : d){
 //   cout<<i<<" ";
 // } cout<<endl;
  //d.pop_back();
  //cout<<"After pop "<<endl;
 // for(int i : d){
 //   cout<<i<<" ";
 // }cout<<endl;

  cout<<"print 1st index element : "<<d.at(1)<<endl;
  cout<<"front : "<<d.front()<<endl;
  cout<<"back : "<<d.back()<<endl;

  cout<<"Empty or not : "<<d.empty()<<endl;
  cout<<"before erase size : "<<d.size()<<endl;

  d.erase(d.begin(), d.end());

  cout<<"After erase size : "<<d.size()<<endl;


}