#include<iostream>
using namespace std;
int main()
{
 int arr[50];
 int size, sum =0;
 cout<<"Enter the size : ";
 cin>>size;

 cout<<"The Element of an array is : "<<" ";
 for(int i =0 ; i<size; i++){
    cin>>arr[i];
    sum = sum + arr[i];
 }
 cout<<endl<<"The sum of all element of an array is : "<<sum;
return 0;
}