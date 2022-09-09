#include<iostream>
using namespace std;

int Getmax(int num[], int n){
   int maxi = INT16_MIN;
   for(int i =0; i<n; i++){
    maxi = max(maxi, num[i]); // predefined functions
 //   if(num[i] > max){
   //     max = num[i];
    }

    return maxi;
}

int GetMin(int num[], int n){
    int mini = INT16_MAX;
    for(int i =0; i<n; i++){

     mini = min(mini, num[i]); // predefined functions
      //  if(num[i] < min){
       //     min =num[i];

    }
    return mini;
}


int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int Array[100];
    cout<<"Enter the element of an array : " << " ";
    for (int i = 0; i < size; i++)
    {
        cin>>Array[i];
    }

    cout<<endl<<"Max value of an array is : "<<Getmax(Array,size)<<endl;

    cout<<endl<<"Min value of an array is : "<<GetMin(Array,size)<<endl;

return 0;
}