#include<iostream>
#include<vector>
using namespace std;

int getpivot(vector<int>&arr, int n){
    int s =0;
    int e = n-1;

    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
         mid = s + (e-s)/2;
    }
     return s;
}

int binarySearch(vector<int>&arr, int s , int e, int key){
    int start = s;
    int end = e;

    int mid = start + (end-s)/2;
    while (start<=end)
    {
       if(arr[mid] == key){
        return mid;
       }
       if(arr[mid] < key){
        start = mid +1;
       }
       else{
        end = mid -1;
       }
       mid = s +(e-s)/2;
    }
    return -1;
}

int finsearch(vector<int>&arr, int n, int k){
    int pivot = getpivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
     return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main(){
    vector<int>arr = {2, 4, 5, 6, 8, 9, 1};

      cout<<"pivot element is at index --> "<<getpivot(arr,7)<<endl;
      int ans = finsearch(arr,7,5);
    cout<<"The searched element is at index --> "<<ans;

}