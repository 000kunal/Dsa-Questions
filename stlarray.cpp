#include<iostream>
#include<array> // we have to add this header file
using namespace std;

int main(){
array<int,4> a = {2, 4, 6, 8};

int size = a.size();

 for (int i = 0 ; i<size; i++){
    cout<<a[i] <<" ";
 }
 cout<<endl<<endl<<"index 2nd element of an array is : "<<a.at(2)<<endl;
 cout<<endl<<"empty or not : "<<a.empty()<<endl;
 cout<<endl<<"frist element of an array is : "<<a.front()<<endl;
 cout<<endl<<"last element of an array is : "<<a.back()<<endl;

}