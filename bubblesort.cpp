#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr, int n){
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i; j++)
        {
           if(arr[j] > arr[j+1]){
           swap(arr[j], arr[j+1]);
           swapped =true;
        }
    }
    if(swapped == false){
        break;
    }
}
    cout<<"Displaying sorted array --> ";
    for (int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {6, 2, 8, 4, 10};

    bubbleSort(arr,5);
}