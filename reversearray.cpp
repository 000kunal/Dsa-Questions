#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[] ,int size){

   cout<<"the reversed array is : ";
   for(int i =0; i<size; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main()
{
  int arr[6] = {2, 4, 6, 8, 10, 12};
  int brr[5] = {1, 3, 5, 7, 9};

  reverse(arr, 6);
  reverse(brr, 5);

  printarray(arr, 6);
  printarray(brr, 5);

return 0;
}