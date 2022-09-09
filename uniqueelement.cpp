#include<iostream>
using namespace std;

int unique(int arr[], int n){

     int ans = 0;
     for(int i = 0; i<n; i++){
        ans = ans^arr[i]; //logic we will xor each element as we know a^a =0 and 0^a = a
     }                    //  1  2  3  2  1  so 1^2^3^2^1
        return ans;                //   so 1 will be cancel out with 1 and 2 will be with 2 so we will get answer = 3
}

int main(){
    int arr[10];
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    cout<<"The element of array are : "<<" ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"The unique element is : "<<unique(arr,size)<<endl;


}