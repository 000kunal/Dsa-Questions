#include<iostream>
#include<vector>
using namespace std;

int insertionSort(vector<int>&arr, int n){

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0)
        {
            if(arr[j] > temp){
                //Shift
                arr[j +1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
    cout<<"Displaying sorted array --> ";
    for (int i : arr)
    {
        cout<<i<<" ";
    }
}


int main(){

    vector<int>arr = {4, 3, 6, 7, 8};

     insertionSort(arr,5);

}